
#include <iostream>
#include "MaxHeap.h"

using namespace std;


int main(){

    int arr[]{1,2,3};
    MaxHeap<int> PQ(arr,3);

    cout << PQ.pop();



//    map<int, set<int> > testMap;
//
//    std::set<int>& set = testMap[1];
//
//
//
//    if (set.empty()){
//        set.insert(1);
//        set.insert(2);
//        set.insert(3);
//    }
//    set.insert(6);
//    set.erase(3);
//
//    testMap.emplace(std::pair<int, std::set<int>>(1, set));
//
//    for (int i : testMap[1]) {
//        cout << i << ' ';
//    }




    return 0;
}