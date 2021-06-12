#include <iostream>

void mergeSort(int array[], int left, int right);
void merge(int array[], int left, int right, int middle);

void printArray(int array[], size_t size);

int main(){

    int arr[] {7,2,1,6,8,5,3,4};

    int size = sizeof(arr)/ sizeof(arr[0]);

    mergeSort(arr, 0, size - 1);
    printArray(arr, size);

    return 0;
}

void merge(int array[], int left, int right, int middle){

    // create auxillory arrays for sub-arrays.
    int size1 = middle  - left + 1;
    int size2 = right - middle ;

    int aux1[size1];
    int aux2[size2];

    for (int i = 0; i < size1; ++i) {
        aux1[i] = array[left + i];
    }
//    for(int x: aux1) std::cout << x << ' ';
//    std::cout << '\n';

    for (int j = 0; j <size2 ; ++j) {
        aux2[j] = array[middle + 1 + j];
    }
//    for(int x: aux2) std::cout << x << ' ';
//    std::cout << '\n';

    // cuurent index of sub and main arrays
    int i, j, k;

    i= 0;
    j=0;
    k=left;

    while(i < size1 && j < size2){
        if (aux1[i] <= aux2[j]){
            array[k] = aux1[i];
            i++;
        }
        else{
            array[k] = aux2[j];
            j++;
        }
        k++;
    }

    // add remaining elements.
    while (i < size1){
        array[k] = aux1[i];
        i++; k++;
    }

    while (j < size2){
        array[k] = aux2[j];
        j++; k++;
    }


}


void mergeSort(int array[], int left, int right){

    // check if one element left in array.
    if (left < right){

        int middle =   left + (right - left) / 2;

        mergeSort(array, left, middle);
        mergeSort(array, middle + 1, right);
        merge(array, left,right, middle);
    }
}

void printArray(int arr[], size_t size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << ' ';
    }
    std::cout << '\n';
}