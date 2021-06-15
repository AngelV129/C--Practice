
#include <iostream>
#include <array>

template<std::size_t SIZE>
void HeapSort(std::array<int, SIZE>& array);

template<std::size_t SIZE>
void heapify(std::array<int, SIZE>& array,int size, int index);

int main() {

    std::array<int, 6> array{2, 8, 5, 3, 9, 1};

    HeapSort(array);

    std::cout <<'\n';
    for (int i : array) {
        std::cout << i << ' ';
    }

    return 0;
}

template<std::size_t SIZE>
void HeapSort(std::array<int, SIZE>& array){
    // Heap sort thhe top elements
    // build a mx heap
    for (int i = (SIZE / 2) - 1; i >= 0; i--){
        std::cout << i << " ";
        heapify(array,array.size() ,i);
    }
    std::cout << SIZE <<'\n';

    for (int i = 0; i < SIZE; ++i) {
        std::cout << array[i] << ' ';
    }

    // create a max max on the mostly sorted array.
    // heap sort
    for (int i = SIZE - 1; i >= 0 ; --i) {
        // Swap root with the last element
        int tmp = array[0];
        array[0] = array[i];
        array[i] = tmp;

        // reHeap down to get the largest element to the root.
        heapify(array, i ,0);

    }

}

template<std::size_t SIZE>
void heapify(std::array<int, SIZE>& array,int  size, int i){


    // Find largest among root, left child and right child
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < size && array[left] > array[largest])
        largest = left;

    if (right < size && array[right] > array[largest])
        largest = right;

    // swapp and continue to heapify if root is not the largest.
    if (largest != i){
        // Swap
        int tmp = array[i];
        array[i] = array[largest];
        array[largest] = tmp;

        heapify(array,size, largest);

    }

}

