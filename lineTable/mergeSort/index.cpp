//
// Created by Lenovo on 2023/12/2.
//

#include "vector"

using merge_Array = std::vector<int>;

// 分治法
// 分治法可以理解为将数据 拆解为若干份数据 每份数据都有他们各自的问题
// 利用递归的思想 我们可以根据数据的增量 以及 最终拆解的数据层次
// 产生的问题为若干份 每个问题视作为一个进程
// 这种方法在计算机硬件资源好(内存)的情况下 能够达到理想的预估时间
// 4 -> 2,2 -> 1,1,1,1 当最终为一的时候 无法拆分 视1为最小节点
// 例如 n -> ... => ......1 n视作数据的增量 可以视作为最小节点的数量 而n到1的过程视作为树节点的高度1lgn
merge_Array merge(merge_Array left, merge_Array right) {
    //临时数组变量
    merge_Array sortResult = {};
    // 数据任务 降序排序
    while (left.size() > 0 && right.size() > 0) {
        // 对比拆分
        if(left[0] < right[0]) {
            sortResult.push_back(left[0]);
            left.erase(left.begin());
        } else {
            sortResult.push_back((right[0]));
            right.erase(right.begin());
        }
    }
    // 组成排序结果
    sortResult.insert(sortResult.end(),left.begin(),left.end());
    sortResult.insert(sortResult.end(), right.begin(), right.end());
    // 返回排序成果
    return sortResult;
}

merge_Array mergeSort(merge_Array array) {
    // 数组长度必须大于1 达到最小节点结束
    if(array.size() <= 1) {
        return array;
    }
    // 分治边界
    int middleIndex = array.size() / 2;
    // 将数据分为若干份
    merge_Array leftArray = merge_Array(array.begin(), array.begin() + middleIndex);
    merge_Array rightArray = merge_Array(array.begin() + middleIndex,array.end());
    // 递归到最小节点
    return merge(mergeSort(leftArray), mergeSort(rightArray));
}
