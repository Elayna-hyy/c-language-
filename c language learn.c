#include <stdio.h>
#include<stdlib.h>
#include<time.h>



int main()
{ 
	int arr[8] = { 2,7,1,9,5,6,8,4 };
	int len = sizeof(arr) / sizeof(int);
	
	for (int i = 0; i < len - 1; i++)
	{
		//��ѭ����bubblesortִ����һ��
		//��ѭ����bubblesort�����ظ���len -1��
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