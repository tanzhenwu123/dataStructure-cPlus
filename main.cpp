#include "init.h"

Array<int> insertArray = {2,9,0,11,3};
Array<int> mergeArray = {20,13,7,2,12,11,9,1};

int main() {
    Array<int> sortResult1 = insertSort(insertArray);
    Array<int> sortResult2 = mergeSort(mergeArray);
    int searchResult1 = binarySearch(sortResult2, 0, sortResult2.size() - 1, 9);
    std::cout<< searchResult1 << std::endl;
    return 0;
}
