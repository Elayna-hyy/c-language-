#include <stdio.h>
#include<stdlib.h>
#include<time.h>

void MaxandMin(int arr[], int len, int* max, int* min)
{
	*max = arr[0];
	for (int i = 0; i < len; i++)
	{
		if (arr[i] > *max)
		{
			*max = arr[i];
		}
	}

	*min = arr[0];
	for (int i = 0; i < len; i++)
	{
		if (arr[i] < *min)
		{
			*min = arr[i];
		}
	}
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int len = sizeof(arr) / sizeof(int);
	int max = arr[0];
	int min = arr[0];
	MaxandMin(arr, len, &max, &min);
	printf("Max:%d\n", max);
	printf("Min:%d\n", min);



	system("pause");
	return 0;
}