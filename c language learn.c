#include <stdio.h>
#include<stdlib.h>
#include<time.h>

void test1()
{
	printf("test1\n");
}

int test2(int num1, int num2)
{
	printf("test2\n");
	return num1 + num2;
}

int main()
{
	void (*p1)() = test1;
	int (*p2)(int, int) = test2;
	p1();
	int num = p2(10, 20);
	printf("%d\n", num);



	system("pause");
	return 0;
}