#include <stdio.h>
#include<stdlib.h>
#include<time.h>


int main()
{
	/*int arr[3][5] =
	{
	{ 1,2,3,11,22 },
	{ 4,5,6 ,44,55},
	{ 7,8,9 ,77,88}
	};

	for (int i = 0; i < 3; i++)
	{
		//外循环遍历二维数组中的索引
		for (int j = 0; j < 5; j++)
		{
			//内循环遍历每一个一维数组
			printf("%d  ", arr[i][j]);
		}
		printf("\n");
	}*/



	/*int arr1[] = { 1,2,3 };
	int arr2[] = { 1,2,3,4,5 };
	int arr3[] = { 1,2,3,4,5,6,7,8,9 };

	int len1 = sizeof(arr1) / sizeof(int);
	int len2 = sizeof(arr2) / sizeof(int);
	int len3 = sizeof(arr3) / sizeof(int);

	int lenarr[3] = { len1,len2,len3 };

	int* arr[3] = { arr1,arr2,arr3 };//传递的是一维数组的地址
	//此时使用arr1的数组名进行计算的时候，会退化到第一个元素的指针，不再表示整体

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < lenarr[i]; j++)
		{
			printf("%d  ", arr[i][j]);
		}
		printf("\n");
	}*/


	system("pause");
	return 0;
}