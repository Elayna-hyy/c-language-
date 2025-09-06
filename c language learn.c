#include <stdio.h>

int main()
{
	//三只小猪称体重

	int a, b, c;
	printf("please input weight of three pigs A:");
	scanf("%d", &a);
	printf("please input weight of three pigs B:");
	scanf("%d", &b);
	printf("please input weight of three pigs C:");
	scanf("%d", &c);
	if (a > b)
	{
		if (a > c)
		{
			printf("Pig A is the heaviest");
		}
		else
		{
			printf("Pig C is the heaviest");
		}
	}
	else
	{
		if (b > c)
		{
			printf("Pig B is the heaviest");
		}
		else
		{
			printf("Pig C is the heaviest");
		}
	}
	


	system("pause");
	return 0;
}