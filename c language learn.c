#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int contrast(int arr[], int len, int random)
{
	for (int a = 0; a < len; a++)
	{
		if (arr[a]==random)
		{
			return 1;
		}
	}
	return 0;
}

int main()
{ 
	//1.Find the maximum value
	int arr[] = {33,5,22,44,55};
	int max = arr[0];
	int len = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < len; i++)
	{
		if (arr[i] < arr[i + 1])
		{
			max = arr[i + 1];
		}
	}
	printf("%d\n", max);

	//2.Traverse the array and sum it up
	srand(time(NULL));
	int arr[10] = {0};
	int len = sizeof(arr) / sizeof(arr[0]);

	for (int a =0; a < len ; )
	{
		int random = rand() % 100 + 1;
		int flag =contrast(arr, len, random);
		if (!flag)
		{
			arr[a] = random;
			a++;
		}
	}

	for (int a = 0; a < len; a++)
	{
		printf("%d\t", arr[a]);
	}
	printf("\n");

	int sum = 0;
	for (int a = 0; a < len; a++)
	{
		sum = sum + arr[a];
	}
	printf("The sum of the random array is :%d\n", sum);

	int ave = sum /len;
	printf("The average of the random array is :%d\n", ave);

	int less = 0;
	for (int a = 0; a < len; a++)
	{
		if (arr[a] < ave)
		{
			less++;
		}
	}
	printf("a total of %d numbers less than the average\n", less);
	


	system("pause");
	return 0;
}