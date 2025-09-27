#include <stdio.h>
#include <string.h>
#include <stdlib.h>
   
int main()
{
	FILE* file = fopen("D:\\OneDrive\\桌面\\test1.txt", "w");

	int c = fputc(97,file);
	printf("%c\n", c);

	int n = fputs("你好世界", file);//返回0 表示写出成功
	printf("%d\n", n);

	char arr[] = { 97,98,99,100,101 };
	int n1=fwrite(arr,1,5,file);
	printf("%d\n", n1);

	fclose(file);
	


	return 0;
}