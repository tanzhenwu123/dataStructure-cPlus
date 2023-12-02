//
// Created by Lenovo on 2023/12/2.
//

#include "vector"
using shortArray = std::vector<int>;

shortArray insertSort(shortArray array) {
    // 随着数据的增量进行迭代 假设所有的内存访问时间为1 此处预算时间为n
    for(int i = 1 ; i < array.size(); i++) {
        // 插入排序可以理解为
        // 后来者对前者进行某种意义上的交换
        // 后来者 此处为缓存
        const int key = array[i];
        // 前者下标 此处为前者下标变量
        int j = i - 1;
        // 这里的下标是从1开始 也就是后来者 与 前者存在的情况下
        // 并且加上交换规则 比如说排序 排序不是简单意义上的比大小 而是一种交换规则
        // 算法是计算机资源合理运用的研究科学 是为了达到某种对数据处理的目的同时合理运用计算机硬件资源的技术
        while (i >= 1 && array[j] > key) {
            // 向后赋值
            array[j + 1] = array[j];
            // j = 1的话 j - 1 前者插入到后者位置
            j = j - 1;
        }
        // j = 0的话 j+1 后者插入到前者位置
        // 上面的j - 1不是多余的
        array[j + 1] = key;
    }
    // 返回整个循环结束的数组 预估时间为n²
    return array;
}
