#include <stdio.h>
#include <string.h>
#include <stdlib.h>
   
int main()
{
	FILE* file = fopen("D:\\OneDrive\\����\\test1.txt", "w");

	int c = fputc(97,file);
	printf("%c\n", c);

	int n = fputs("�������", file);//����0 ��ʾд���ɹ�
	printf("%d\n", n);

	char arr[] = { 97,98,99,100,101 };
	int n1=fwrite(arr,1,5,file);
	printf("%d\n", n1);

	fclose(file);
	


	return 0;
}