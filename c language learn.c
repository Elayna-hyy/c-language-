#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

typedef struct student
{
	char name[100];
	int age;
}S;

void alter(S* p)
{
	printf("�޸�ǰ����Ϊ��%s,%d\n", (*p).name, (*p).age);
	printf("����������\n");
	scanf("%s", (*p).name);
	printf("����������\n");
	scanf("%d", &((*p).age));
	printf("�޸ĺ�����Ϊ��%s,%d\n", (*p).name, (*p).age);
}

int main()
{
	//ϸ�ڣ�������д�ṹ�����͵ı������൱���Ƕ�����һ���±���
	//		  ���ں����н����޸���st��ֵ������main�����е�s1��û���޸�
	
	S stu;
	strcpy(stu.name, "aaa");
	stu.age = 0;
	printf("��ʼ����:%s,%d\n", stu.name, stu.age);
	alter(&stu);
	printf("��β����:%s,%d\n", stu.name, stu.age);

	system("pause");
	return 0;
}

