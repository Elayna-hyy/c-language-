#include <stdio.h>
#include <string.h>
#include <stdlib.h>
   
int main()
{
	//用代码复制 粘贴文件
	//win中记事本能打开并且能读懂的，只有纯文本文件，txt mx irc
	FILE* file1 = fopen("D:\\OneDrive\\桌面\\test.docx", "rb");

	FILE* file2 = fopen("D:\\OneDrive\\桌面\\test\\copy.docx", "wb");

	char arr[1024];
	int n;
	while ((n =fread(arr, 1, 1024, file1)) != 0)
	{
		fwrite(arr, 1, n, file2);
	}
	fclose(file1);
	fclose(file2);


	


	return 0;
}