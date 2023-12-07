//
// Created by Lenovo on 2023/12/2.
//

#include "iostream"
#include "vector"

#ifndef DATASTRUCTURE_CPLUS_INIT_H
#define DATASTRUCTURE_CPLUS_INIT_H

#pragma once
template<typename T>
using Array = std::vector<T>;

Array<int> insertSort(Array<int> array);
Array<int> mergeSort(Array<int> array);
void quickSort(Array<int>& array, int begin, int end);
int binarySearch(Array<int> array, int begin, int end, int target);

#endif //DATASTRUCTURE_CPLUS_INIT_H
