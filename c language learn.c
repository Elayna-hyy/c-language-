#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>


int main()
{
	char* ri_account = "zhangsan";
	char* ri_code = "123456";

	

	for (int i = 1; i <= 3; i++)
	{
		printf("please input your account name\n");
		char account[100];
		scanf("%s", account);

		printf("please input your password\n");
		char code[100];
		scanf("%s", code);
		if (!strcmp(ri_account, account) && !strcmp(ri_code, code))//�ú�������ֵΪ0��0Ϊ�٣���ȡ��
		{
			printf("YES\n");
			break;
		}
		else
		{
			if (i == 3)
			{
				printf("�û�%s������������ϵ0858\n", ri_account);
			}
			else
			{
				printf("NO");
				printf("�㻹��%d�λ���\n", 3 - i);
			}
		}

	}












	system("pause");
	return 0;
}