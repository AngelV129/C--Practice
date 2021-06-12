

#include <iostream>
#include <array>

void swap(int* a, int* b);

template<std::size_t SIZE>
int partition(std::array<int, SIZE>& array, int start, int end);

template<std::size_t SIZE>
void quickSort(std::array<int, SIZE>& array, int left, int right);

template<std::size_t SIZE>
void printArray(std::array<int, SIZE> array){
    for(int x: array){
        std::cout << x << ' ';
    }
    std::cout << '\n';
}

int main(){

    std::array<int, 8> array{7,2,1,6,8,5,3,4};

    quickSort(array, 0, array.size() - 1);
    printArray(array);

    return 0;
}

// Function will rearrange the array(Finds the partition point)
// int start, starting index.
// int end, index of last element
template<std::size_t SIZE>
int partition(std::array<int, SIZE>& array, int start, int end){

    std::cout << "pppp\n";
    // make the far right element the pivot.
    int pivot = array[end];

    // start of the partition index
    // used to switch when a lesser value is found
    // will also serve as the new pivot location
    int partitionIndex= start;

    // trverse arrary and compare each with the pivot.
    for (int i = start; i < end; ++i) {

        // if element smaller than the pivot
        // swap with the greater element that greater.
        if (array[i] <= pivot){
            swap(&array[i], &array[partitionIndex]);
            partitionIndex++;
        }
    }
    swap(&array[partitionIndex], &array[end]);
    return partitionIndex;
}

template<std::size_t SIZE>
void quickSort(std::array<int, SIZE>& array, int left, int right){

    // check if array is valid
    if (left < right){

        // partirions the array and retuns index of the pivot.
        // all values less than the pivot are to the left.
        // all values greater than the pivot are to the right.
        int pIndex = partition(array, left, right);

        // call to left of pivot
        quickSort(array, left, pIndex - 1);
        // call to right of the pivot.
        quickSort(array, pIndex+1 ,right);
    }
}


void swap(int* a, int* b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
//
//    std::cout << "*a = " << *a << " *b = " << *b << '\n';
}