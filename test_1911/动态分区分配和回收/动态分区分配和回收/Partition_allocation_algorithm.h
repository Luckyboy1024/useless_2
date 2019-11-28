#define _CRT_SECURE_NO_WARNINGS 1

// 分区分配算法  Partition allocation algorithm

//1) 首次适应算法(first fit)
//空闲分区链以地址递增的次序链接。
//分配时，从链首开始顺序查找，直至找到一个大小能满足要求的空闲分区为止；再按作业的大小，从该分区中划出一块内存空间分配给请求者，余下的空闲分区仍留在空闲链中。若从链首直至链尾都不能找到一个能满足要求的分区，则失败返回。
//
//
//2) 循环首次适应算法(next fit)
//由首次适应算法演变而成，每一次从上次找到的下一个分区开始查找。直到找到一个能满足要求的分区
//
//
//3) 最佳适应算法(best fit)
//将所有的空闲分区按其容量以从小到大的顺序形成一空闲分区链，第一次找到的空闲区必然是最佳的
//
//
