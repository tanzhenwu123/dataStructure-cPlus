#include "init.h"

Array<int> insertArray = {2,9,0,11,3};
Array<int> mergeArray = {20,13,7,2,12,11,9,1};
Array<int> quickArray = {9, 22,11,3,2,7,9,11,23};

void PrintArray(Array<int> array) {
    for(int i = 0; i < array.size(); i ++) {
        std:: cout << array[i] << std::endl;
    }
}

int main() {
    Array<int> sortResult1 = insertSort(insertArray);
    Array<int> sortResult2 = mergeSort(mergeArray);
    quickSort( quickArray,0,quickArray.size() - 1);
    PrintArray(quickArray);
    int searchResult1 = binarySearch(sortResult2, 0, sortResult2.size() - 1, 9);
    return 0;
}
