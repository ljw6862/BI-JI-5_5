#include<stdio.h>
//数组指针            指针
//int main()
//{
//	//int* p = NULL;//p是整形指针-指向整形的指针
//	//char* p = NULL;//pc是字符指针-指向字符的指针
//	//数组指针-指向数组的指针-存放数组的地址
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;//p就是数组指针
//	return 0;
//}

//int main()
//{
//	char* arr[5];
//	char(*pa)[5] = &arr;
//	
//	int arr2[10] = { 0 };
//	int(*pa2)[10] = &arr2;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*pa)[10] = &arr;
//	int i = 0;
//	for (i = 0; i <10; i++)
//	{
//		printf("%d ", (*pa)[i]);
//		printf("%d ", *(*pa + i));//*pa==arr
//
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", *(p + i));
//	}
//	return 0;
//}
//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print2(int(*p)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", p[i][j]);
//			printf("%d ", *(p[i] + j));
//
//
//			printf("%d ", *(*(p + i) + j));//*(p+i) 是行
//			printf("%d ", ( * (p + i))[j]);
//		}
//		printf("\n");
//	}
//}
int main()
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	//print1(arr,3,5);//行和列传过去
	print2(arr, 3, 5);
	return 0;
}

//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);
//		printf("%d ", *(p + i));
//
//		printf("%d ", *(arr + i));
//		printf("%d ", arr[i]);
//
//	}
//	return 0;
//}

//int arr[5];   arr是一个5个元素的整形数组
//int* parr1[10];  parr1是一个数组 数组有10个元素，每个元素类型是int,parr1是指针数组
//int(*parr2)[10]; parr2是一个指针 该指针指向了一个数组 数组有10个元素，每个元素类型是int
// parr2是数组指针
//int(*parr3[10])[5];parr3是一个数组（方框优先级高）该数组有10个元素，每个元素是一个数组指针
//该数组指针指向的数组有5个元素，每个元素是int