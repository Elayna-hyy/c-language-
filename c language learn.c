#include <stdio.h>
#include <string.h>
#include <stdlib.h>
   
int main()
{
	
	FILE* file = fopen("D:\\OneDrive\\桌面\\test1.txt","r");
	//读不到返回-1
	//char arr[1024];
	//char* str;
	//while ((str = fgets(arr, 1024, file)) != NULL)
	//{
	//	printf("%s", str);
	//}
	// //读取数据 以换行符为准
	//fclose(file);

	//abc占用一个字节，中文win64，默认两个字节，读取时尽可能装满字节
	//文件100字节
	//数组长度30字节
	//前三次读取30个字节，会把数组装满，函数返回30
	//第四次读取剩余30字节，把数据放回数组中，返回10
	//第五次没有数据可被读取，函数返回0

	//文件中数据：abc你好你好
	//第一次读取：abc+半个你
	//第二次读取：半个你+好+半个你
	//第三次读取：半个你+好
	char arr[4];
	int n;
	while ((n=fread(arr, 1, 1024, file)) != 0)
	{
		for (int i = 0; i < n; i++)
		{
			printf("%c", arr[i]);
		}
	}


	return 0;
}