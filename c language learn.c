#include <stdio.h>
#include <string.h>
#include <stdlib.h>
   
int main()
{
	
	FILE* file = fopen("D:\\OneDrive\\����\\test1.txt","r");
	//����������-1
	//char arr[1024];
	//char* str;
	//while ((str = fgets(arr, 1024, file)) != NULL)
	//{
	//	printf("%s", str);
	//}
	// //��ȡ���� �Ի��з�Ϊ׼
	//fclose(file);

	//abcռ��һ���ֽڣ�����win64��Ĭ�������ֽڣ���ȡʱ������װ���ֽ�
	//�ļ�100�ֽ�
	//���鳤��30�ֽ�
	//ǰ���ζ�ȡ30���ֽڣ��������װ������������30
	//���Ĵζ�ȡʣ��30�ֽڣ������ݷŻ������У�����10
	//�����û�����ݿɱ���ȡ����������0

	//�ļ������ݣ�abc������
	//��һ�ζ�ȡ��abc+�����
	//�ڶ��ζ�ȡ�������+��+�����
	//�����ζ�ȡ�������+��
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