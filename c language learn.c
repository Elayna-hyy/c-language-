#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>


int main()
{
	printf("please input a strip string:");
	char str[100];//由于键盘录入是修改，故不可以用第二种方式
	scanf("%s", str);//str本身就可以看作指针

	char* p = str;
	while (1)//由于不知道数组长度可以用while循环，
	{
		char c = *p;
		if (c == '\0')//数组的最后一位编译器默认添加/0，可以用这个来结束循环
		{
			break;
		}
		printf("%c\n", c);
		p++;
	}





	system("pause");
	return 0;
}