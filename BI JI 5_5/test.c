#include<stdio.h>
//����ָ��            ָ��
//int main()
//{
//	//int* p = NULL;//p������ָ��-ָ�����ε�ָ��
//	//char* p = NULL;//pc���ַ�ָ��-ָ���ַ���ָ��
//	//����ָ��-ָ�������ָ��-�������ĵ�ַ
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;//p��������ָ��
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
//			printf("%d ", *(*(p + i) + j));//*(p+i) ����
//			printf("%d ", ( * (p + i))[j]);
//		}
//		printf("\n");
//	}
//}
int main()
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	//print1(arr,3,5);//�к��д���ȥ
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

//int arr[5];   arr��һ��5��Ԫ�ص���������
//int* parr1[10];  parr1��һ������ ������10��Ԫ�أ�ÿ��Ԫ��������int,parr1��ָ������
//int(*parr2)[10]; parr2��һ��ָ�� ��ָ��ָ����һ������ ������10��Ԫ�أ�ÿ��Ԫ��������int
// parr2������ָ��
//int(*parr3[10])[5];parr3��һ�����飨�������ȼ��ߣ���������10��Ԫ�أ�ÿ��Ԫ����һ������ָ��
//������ָ��ָ���������5��Ԫ�أ�ÿ��Ԫ����int