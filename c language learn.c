#include <stdio.h>
#include<string.h>
#include<stdlib.h>

struct linkman
{
	char name[20];
	int age;
};

struct roster
{
	struct linkman arr;
	int size;
};

void add(struct roster* p)
{
	printf("������������");
	scanf("%s", p->arr.name);
	printf("������%s\n", p->arr.name);
}

int main()
{
	//�ṹ��Ƕ�� ָ����̸�ֵ
	struct roster* p=malloc(sizeof(struct roster));
	add(p);
	


	system("pause");
	return 0;
}




