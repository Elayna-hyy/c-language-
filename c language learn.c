#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>


int main()
{
	char strarr[5][100] =
	{
		"zhangsan",
		"lisi",
		"wangwu",
		"zhaoliu",
		"qianqi"
	};

	for (int i = 0; i < 5; i++)
	{
		char* str = strarr[i];
		//不能用 char str[100]=strarr[i]的方式去遍历
		printf("%s\n", str);
	}

	char* strarr2[5] =
	{
		"zhangsan",
		"lisi",
		"wangwu",
		"zhaoliu",
		"qianqi"
	};

	for (int i = 0; i < 5; i++)
	{
		char* str = strarr2[i];
		printf("%s\n", str);
	}












	system("pause");
	return 0;
}