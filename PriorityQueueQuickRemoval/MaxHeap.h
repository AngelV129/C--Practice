
#ifndef PRACTICE_MAXHEAP_H
#define PRACTICE_MAXHEAP_H

#include <set>
#include <map>
#include <vector>

template<typename T>
class MaxHeap {

private:
    std::map<T, std::set<int>> m_map;
    std::vector<T> heap;

public:

    MaxHeap(){}
    MaxHeap(int size);
    MaxHeap(T elems[], size_t arrySize);


    int size(){return heap.size();}

private:
    // Add a node value and its indez to the map.
    void  mapAdd(T value, int index);

    // Remove the index of given value, O(logN)
    void mapRemove(T value, int index);

    // Bubble down values.
    void bubbleDown(int index);

};




#endif //PRACTICE_MAXHEAP_H
