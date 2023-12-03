//
// Created by Lenovo on 2023/12/2.
//

#ifndef DATASTRUCTURE_CPLUS_INIT_H
#define DATASTRUCTURE_CPLUS_INIT_H

#include "iostream"
#include "vector"
using Array = std::vector<int>;

Array insertSort(Array array);
Array mergeSort(Array array);
int binarySearch(Array array, int begin, int end, int target);

#endif //DATASTRUCTURE_CPLUS_INIT_H
