
#ifndef PRACTICE_MAXHEAP_H
#define PRACTICE_MAXHEAP_H

#include <set>
#include <map>
#include <vector>
#include <optional>

template<typename T>
class MaxHeap {

private:
    std::map<T, std::set<int>> m_map;
    std::vector<T> heap;
    using Set_Int = std::set<int>;

public:

    MaxHeap(){}
    MaxHeap(int size);
    MaxHeap(T elems[], size_t arrySize);

    // add an element to prority queue.
    void add(T val);

    // remove the node of heap, O(logn)
    T pop();

    // Return the element in heap with the highest priority without
    // removing. If the Priority queue is empty then exception is thrown.
    T peek();

    // Test if given value exist in the queue. O(1)
    bool contains(T val);

    // True or false if queue is empty
    bool isEmpty(){return  size() == 0;}

    // return size of the heap
    int size(){return heap.size();}

    // removes a given element from the heap, O(logn)
    bool remove(T val);

private:
    // Add a node value and its indez to the map.
    void  mapAdd(T value, int index);

    // Remove the index of given value, O(logN)
    void mapRemove(T value, int index);

    // Get an index position from a given value.
    // NOTE: if multiple exist then the highest in heap is given.
    int mapGet(T value);

    // Exchange the index of two nodes internally within the map.
    void mapSwap(T val1, T val2, int val1Index, int val2Index);

    // Bubble down values. O(logn)
    void bubbleDown(int index);

    // Bubble up a node. O(logN)
    void bubbleUp(int index);

    // return the index whose element is greatest
    // Test if the value of node i >= j
    bool greater(int i, int j);

    // removes a node at given index, O(logn)
    T removeAt(int index);

    // Swap two nodes,  i & j, O(1)
    void swap(int i , int j);

};


template<typename T>
MaxHeap<T>::MaxHeap(int size) {

    heap.reserve(size);
}

template<typename T>
MaxHeap<T>::MaxHeap(T *elems, size_t arrySize) {

    int heapSize = arrySize;
    heap.reserve(heapSize);

    // place all elements into the heap
    for (int i = 0; i < heapSize; ++i) {
        heap.push_back(elems[i]); // or use push back
        mapAdd(elems[i], i);

    }

    // Heapify O(n)
    for (int i = 0; i < (heapSize/2) -1 ; ++i) {
        bubbleDown(i);
    }
}

template<typename T>
void MaxHeap<T>::mapAdd(T value, int index) {

    std::set<int>& set = m_map[value];

    // new value being inserted to map
    if (set.empty()){
        set.insert(value);
        m_map.emplace(std::pair<T, Set_Int>(value, set));
    }
    else{
        // is a set passed by refence? NO So insrt and replace the old set.
        set.insert(index);

    }
}

template<typename T>
void MaxHeap<T>::mapRemove(T value, int index) {

    // Grab the set from map
    Set_Int& set = m_map[value];

    // delete the specific index
    set.erase(index);

    // erase the key from map if value is empty
    if (set.size() == 0) m_map.erase(value);

}

template<typename T>
void MaxHeap<T>::bubbleDown(int index) {

    int heapSize = size();
    // Left and right node
    int left = 2 * index + 1;
    int right = 2 * index + 2;
    int greatest = left;

    while (true){

        // Find which i larger, left or right.
        if (left < heapSize && right < heapSize && greater(right , left) ) greatest = right;

        // Stop if out of bounds or early if no longer v=can bubble down.
        if (left >= heapSize || greater(index, greatest)) break;

        swap(greatest, index);
        index  = greatest;
    }

}

template<typename T>
void MaxHeap<T>::bubbleUp(int index) {

    // Grab index of the parent.
    int parent = (index - 1)  /2;

    // keep bubbling up until root is reached or parent is greater than the current.
    while (index > 0 && greater(index, parent)){

        // swap index with its parent
        swap(index, parent);
        index = parent;

        // Get index of the next parent node.
        parent = (index - 1 )/ 2;
    }
}

template<typename T>
bool MaxHeap<T>::greater(int i, int j) {
    T val1 = heap.at(i);
    T val2 = heap.at(j);
    return val1 > val2;
}

template<typename T>
void MaxHeap<T>::swap(int i, int j) {

    // get the current values of the indexes
    T i_elem = heap.at(i);
    T j_elem = heap.at(j);

    // swap the values
    heap.at(i ) = j_elem;
    heap.at(j ) = i_elem;

    mapSwap(i_elem, j_elem, i, j);

}

template<typename T>
void MaxHeap<T>::mapSwap(T val1, T val2, int val1Index, int val2Index) {

    std::set<int>& set1 = m_map[val1];
    std::set<int>& set2 = m_map[val2];

    set1.erase(val1);
    set2.erase(val2);

}

template<typename T>
int MaxHeap<T>::mapGet(T value) {

    // get value from map
    // throws exceptioon if does not exist
    Set_Int& set = m_map.at(value);

    return *set.rbegin();

}

template<typename T>
bool MaxHeap<T>::remove(T val) {

    Set_Int& set = m_map.at(val);
    if (set.empty()) return false;
    else
    {
        int removed_index = *set.rbegin();
        T removed_elemnt = removeAt(removed_index);

        return val == removed_elemnt;
    }
}

template<typename T>
T MaxHeap<T>::removeAt(int index) {

    // check if heap is empty
    if (isEmpty()) throw std::exception("Tried to remove from an empty queue.");

    // swap root with the last element.
    // get the value to be removed.
    int lastElementIndex = size() - 1;
    T removed_elem = heap.at(index);
    swap(index, lastElementIndex);

    // remove from both map and heap.
    heap.pop_back();
    mapRemove(removed_elem, lastElementIndex);

    // If removing the last element
    if (index == lastElementIndex) return removed_elem;

    T elem = heap.at(index);

    // try bubbledown
    bubbleDown(index);
    // bubble up if needed
    if (heap.at(index) == elem) bubbleUp(index);

    return removed_elem;
}

template<typename T>
bool MaxHeap<T>::contains(T val) {

    return m_map.contains(val);
}

template<typename T>
T MaxHeap<T>::peek() {
    return heap.at(0);
}

template<typename T>
T MaxHeap<T>::pop() {
    return removeAt(0);
}

template<typename T>
void MaxHeap<T>::add(T val) {

    heap.push_back(val);
    m_map.insert({val, size() - 1});

    bubbleUp(size() - 1);
}


#endif //PRACTICE_MAXHEAP_H
