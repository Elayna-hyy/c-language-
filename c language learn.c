#include <stdio.h>
#include <string.h>
#include <stdlib.h>
   
int main()
{
	//�ô��븴�� ճ���ļ�
	//win�м��±��ܴ򿪲����ܶ����ģ�ֻ�д��ı��ļ���txt mx irc
	FILE* file1 = fopen("D:\\OneDrive\\����\\test.docx", "rb");

	FILE* file2 = fopen("D:\\OneDrive\\����\\test\\copy.docx", "wb");

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