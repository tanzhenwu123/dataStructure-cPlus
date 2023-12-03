//
// Created by Lenovo on 2023/12/3.
//

#include "vector"

using Array = std::vector<int>;

// 此处为非递归
// 二分查找的前提是要数组有序化
// 其次是依靠两个下标 通过下标之间不断靠拢对比 最终得出结果 -1 或者middleIndex
// 拥有middleIndex的时候 size必须大于两位
// 时间复杂度为数据的增量 n - 2, 除去left《= right的时候
// 整个程序共对内存访问了数据增量减去两个下标的操作次数
int binarySearch(Array array,int begin, int end, int target) {
    int left = begin,
    right = end;
    while (left <= right) {
        int middleIndex = left + (right - left) / 2;
        if(array[middleIndex] == target) {
            return middleIndex;
        } else if(array[middleIndex] > target) {
            left = middleIndex + 1;
        } else {
            right = middleIndex - 1;
        }
    }
    return -1;
}
