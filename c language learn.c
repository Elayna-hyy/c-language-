#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>


int main()
{
	printf("please input a strip string:");
	char str[100];//���ڼ���¼�����޸ģ��ʲ������õڶ��ַ�ʽ
	scanf("%s", str);//str����Ϳ��Կ���ָ��

	char* p = str;
	while (1)//���ڲ�֪�����鳤�ȿ�����whileѭ����
	{
		char c = *p;
		if (c == '\0')//��������һλ������Ĭ�����/0�����������������ѭ��
		{
			break;
		}
		printf("%c\n", c);
		p++;
	}





	system("pause");
	return 0;
}