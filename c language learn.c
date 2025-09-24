#include <stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>

void ergodic(int* p, int size);


int main()
{
	int* p = malloc(25 * sizeof(int));
	int size = 25;
	
	//对空间进行赋值
	for (int i = 0; i < size; i++)
	{
		int random = (i + 1) % 100;
		*(p + i) = random;
	}
	ergodic(p, 25);

	int* p1 = realloc(p, 100 * sizeof(int));

	for (int i = 0; i < 100; i++)
	{
		int random = (i + 1) % 100;
		*(p1 + i) = random;
	}
	ergodic(p1, 100);
	
	int* p2 = calloc(100 , sizeof(int));
	ergodic(p2, 100);
	
	
	

	system("pause");
	return 0;
}

void ergodic(int* p, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", *(p + i));
	}
	printf("\n");
}
