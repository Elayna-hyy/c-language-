#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

typedef struct ulrtraman
{
	char name[100];
	int attack;
	int defence;
	int blood;
}M;
int main()
{
	//�ṹ�� �����
	M taro = { "̩��",100,90,500 };
	M rem = { "��ŷ",90,70,100 };
	M eddie = { "����",80,60,400 };

	M arr[3] = { taro,rem,eddie };
	for (int i = 0; i < 3; i++)
	{
		M temp =  arr[i];
		printf("���֣�%s����������%d����������%d��Ѫ����%d\n", temp.name, temp.attack, temp.defence, temp.blood);
	}

	
	






	system("pause");
	return 0;
}