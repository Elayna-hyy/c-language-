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
	//结构体 起别名
	M taro = { "泰罗",100,90,500 };
	M rem = { "雷欧",90,70,100 };
	M eddie = { "艾迪",80,60,400 };

	M arr[3] = { taro,rem,eddie };
	for (int i = 0; i < 3; i++)
	{
		M temp =  arr[i];
		printf("名字：%s，攻击力：%d，防御力：%d，血量：%d\n", temp.name, temp.attack, temp.defence, temp.blood);
	}

	
	






	system("pause");
	return 0;
}