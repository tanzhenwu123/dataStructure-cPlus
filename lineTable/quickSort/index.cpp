//
// Created by Lenovo on 2023/12/6.
//

#include "vector"
#include "iostream"

using quick_Array = std::vector<int>;

// 依旧是分治法 n, n-1,.....,1
// 时间复杂度依旧是n1lgn
// 假设我有两根指针 假设数组第一个为边界线 是上一次循环找到的理想降序数据
// 以理想降序为边界 寻找本次循环的理想降序 当左边的降序指针指针结束并停留在边界
// 以理想降序为边界 寻找本次循环的理想升序 当右边的升序指针结束并停留在边界
// 结束循环并且完成 升序降序的数据交换
void quickSort(quick_Array& array, int begin, int end) {
    // 递归出口 分治边界触底的时候 结束此次递归
    if(begin >= end) {
        return;
    }

    int minData = array[begin],
    leftPoint = begin,
    rightPoint = end;
    while (leftPoint < rightPoint) {
        while (rightPoint > leftPoint && array[rightPoint] >= minData) {
            rightPoint--;
        }
        array[leftPoint] = array[rightPoint];
        while (leftPoint < rightPoint && array[leftPoint] <= minData) {
            leftPoint++;
        }
        array[rightPoint] = array[leftPoint];
    }
    array[leftPoint] = minData;
    // 最大的扔后面 下次循环跳过此次最大降序数据 最大增量为n-1 end = n -> end = n - 1
    quickSort(array,begin, leftPoint - 1);
    // 最小的放前面 下次循环跳过此次最小升序数据 最大增量为n-1 begin = begin -> begin = begin + 1
    quickSort(array, leftPoint + 1, end);
    // 分治法注重分治的目的
    // 目的为真时
}