

#include "MaxHeap.h"

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
        heap.emplace_back(elems[i]);
        mapAdd(elems[i], i);

    }

    for (int i = 0; i < std::max(0, (heapSize/2) -1) ; ++i) {
        bubbleDown(i);
    }
}

template<typename T>
void MaxHeap<T>::mapAdd(T value, int index) {

    std::set<int> set = m_map[value];

    // new value being inserted to map
    if (set.empty()){
        set.insert(value);
        m_map.emplace(std::pair<T, std::set<int>>(value, set));
    }
    else{
        // is a set passed by refence?
        set.insert(index);
    }

}

template<typename T>
void MaxHeap<T>::bubbleDown(int index) {

    // Left and right node

}


