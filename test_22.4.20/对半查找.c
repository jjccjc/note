#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11 };                        //创建一个数组，作为查找
	int left = 0;                                                          //创建一个最左值
	int a = 33;                                                             //创建要查找的值变量
	int sz = sizeof(arr) / sizeof(arr[0]);                      //计算数组内有多少个数字，为后续定义下标
	int right = sz - 1;                                                 //创建一个最右值       -1是因为下标从0开始算
	while (left <= right)                                            //当最左值小于等于最右值时进行循环      在范围内才能查找
	{
		int mid = (left + right) / 2;                  //创建中间值=(最左值+最右值)/2
		if (arr[mid] > a)                             //mid的值放在arr[]内部，就变成了下标值，所以arr[mid]的值=mid值+1
		{
			right = mid - 1;                                     //最右值=中间值-1              缩小搜索范围
		}
		else if (arr[mid] < a)                                   //arr[mid]值算法同上
		{
			left = mid + 1;                                      //最左值=中间值+1              缩小搜索范围
		}
		else                                                     //mid=a或者mid!a
		{
			printf("找到了,下标识是 %d\n",mid);
			break;                                               //跳出循环
		}
	}
	if (left > right)                                           //当最左值>最右值
	{
		printf("找不到");
	}
	return 0;
}