#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>


int main()
{
	//统计字符次数
	char str[100];
	int bigcount=0, smallcount=0,numcount=0;
	printf("please input a string\n");
	scanf("%s", str);
	for (int i = 0; i < strlen(str); i++)
	{
		char c = str[i];
		if (c >= 'a'&&c <= 'z')
		{
			smallcount++;
		}
		else if (c >= 'A'&& c <= 'Z')
		{
			bigcount++;
		}
		else if (c >= '0'&&c <= '9')
		{
			numcount++;
		}
	}
	printf("smallcount:%d\n", smallcount);
	printf("bigcount:%d\n", bigcount);
	printf("numcount:%d\n", numcount);



	system("pause");
	return 0;
}