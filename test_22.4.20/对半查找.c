#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11 };                        //����һ�����飬��Ϊ����
	int left = 0;                                                          //����һ������ֵ
	int a = 33;                                                             //����Ҫ���ҵ�ֵ����
	int sz = sizeof(arr) / sizeof(arr[0]);                      //�����������ж��ٸ����֣�Ϊ���������±�
	int right = sz - 1;                                                 //����һ������ֵ       -1����Ϊ�±��0��ʼ��
	while (left <= right)                                            //������ֵС�ڵ�������ֵʱ����ѭ��      �ڷ�Χ�ڲ��ܲ���
	{
		int mid = (left + right) / 2;                  //�����м�ֵ=(����ֵ+����ֵ)/2
		if (arr[mid] > a)                             //mid��ֵ����arr[]�ڲ����ͱ�����±�ֵ������arr[mid]��ֵ=midֵ+1
		{
			right = mid - 1;                                     //����ֵ=�м�ֵ-1              ��С������Χ
		}
		else if (arr[mid] < a)                                   //arr[mid]ֵ�㷨ͬ��
		{
			left = mid + 1;                                      //����ֵ=�м�ֵ+1              ��С������Χ
		}
		else                                                     //mid=a����mid!a
		{
			printf("�ҵ���,�±�ʶ�� %d\n",mid);
			break;                                               //����ѭ��
		}
	}
	if (left > right)                                           //������ֵ>����ֵ
	{
		printf("�Ҳ���");
	}
	return 0;
}