#include <stdio.h>
#include<stdlib.h>
#include<time.h>

//�����������״̬�ֿ�������
/*int remainder(int num1, int num2, int res)
{
	if (num2 == 0)//���Ҫдһ���жϣ����Ǳ���Ҫ����һ��ֵ�������������������Է��ض��ٶ�������
	{
		return ?:
	}
	res = num1 % num2;//����num2=0ʱ�ͱ�����
	return res;
}*/
int remainder(int num1, int num2, int* res)
{
	if (num2 == 0)
	{
		return 1;
	}
	*res = num1 % num2;//��ʱд���÷���ֵ��ʾ״̬��0���� 1���������Ϳ�����
	return 0;
}

int main()
{
	int a = 10;
	int b = 4;
	int res = 0;
	int flag = remainder(a, b, &res);
	//��״̬�����ж�
	if (flag == 0)
	{
		printf("the remainder is %d\n", res);
	}



	system("pause");
	return 0;
}




