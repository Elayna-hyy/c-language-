#include <stdio.h>
#include<stdlib.h>
#include<time.h>



int main()
{ 
	int arr[8] = { 2,7,1,9,5,6,8,4 };
	int len = sizeof(arr) / sizeof(int);
	
	for (int i = 0; i < len - 1; i++)
	{
		//内循环把bubblesort执行了一次
		//外循环把bubblesort动作重复了len -1次
		for (int j = 0; j < len - 1-i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	

	for (int j = 0; j < len; j++)
	{
		printf("%d  ", arr[j]);
	}



	
	


	system("pause");
	return 0;
}