#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	/*int perfect_num,sum=0;
	printf("please input a num :");
	scanf_s("%d", &perfect_num);
	int len = perfect_num / 2;
	for (int i = 1; i <= len ; i++)
	{
		if (perfect_num % i == 0)
		{
			sum = sum + i;
		}
	}
	if (sum == perfect_num)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}*/
	char num[10];
	printf("请输入一个不大于5位的数字:");
	scanf("%s", num);
	int len = strlen(num);
	printf("%d\n", len);

	for (int i = 0; i < len; i++)
	{
		printf("%c", num[i]);
		if (i != len - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
	for (int i = len - 1; i >= 0; i--)
	{
		printf("%c", num[i]);
	}



	return 0;
}