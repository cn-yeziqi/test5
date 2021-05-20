#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
// //第一种方法冒泡排序法
////void stl_sort(int arr[], int sz)//冒泡排序函数
////{
////	int i = 0;
////	for (i = 0; i < sz - 1; i++)
////	{
////		int j = 0;
////		int flag = 1;
////		for (j = 0; j < sz - 1 - i; j++)
////		{
////			if (arr[j] > arr[j + 1])
////			{
////				int tem = arr[j];
////				arr[j] = arr[j + 1];
////				arr[j + 1] = tem;
////				flag = 0;
////			}
////		}
////		if (1 == flag)
////		{
////			break;
////		}
////	}
////}
////int main()
////{
////	int arr[10];
////	int sz = sizeof(arr) / sizeof(arr[0]);
////	printf("请输入10个整数\n");
////	for (int i = 0; i < 10; i++)
////	{
////		scanf("%d", &arr[i]);
////	}
////	stl_sort(arr, sz);
////	printf("max=%d\n", arr[9]);
////	return 0;
////}
////第二种比较法
#include <stdio.h>
int main()
{
	int arr[10] ;
	int max = arr[0];
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("请输入10个数字\n");
	for (int i=0;i<10;i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < sz; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	printf("最大值为:%d", max);
	return 0;
}
