#include <stdio.h>
#include<stdlib.h>
#include<time.h>


int main()
{ 
	int arr[] = { 1,2,3,4,5 };
	int len = sizeof(arr) / sizeof(0);
	srand(time(NULL));
	int random = rand() % len;

	for (int i = 0; i < len; i++)
	{
		printf("%d    ", arr[i]);
	}
	printf("\n");
	for (int i = 0; i < len; i++)
	{
		int temp = arr[i];
		arr[i] = arr[random];
		arr[random] = temp;
	}

	for (int i = 0; i < len; i++)
	{
		printf("%d    ", arr[i]);
	}
	printf("\n");
	
	


	system("pause");
	return 0;
}