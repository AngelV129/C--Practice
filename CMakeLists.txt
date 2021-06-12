cmake_minimum_required(VERSION 3.19)
project(Practice)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory("${PROJECT_SOURCE_DIR}/BST/first_bst")
add_subdirectory("${PROJECT_SOURCE_DIR}/BST/InorderSuccsessor")
add_subdirectory("${PROJECT_SOURCE_DIR}/Heap-Sort/")
add_subdirectory("${PROJECT_SOURCE_DIR}/Sorts/QuickSort/")
add_subdirectory("${PROJECT_SOURCE_DIR}/Sorts/Merge_Sort/")
