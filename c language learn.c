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
	printf("请输入姓名：");
	scanf("%s", p->arr.name);
	printf("姓名：%s\n", p->arr.name);
}

int main()
{
	//结构体嵌套 指针键盘赋值
	struct roster* p=malloc(sizeof(struct roster));
	add(p);
	


	system("pause");
	return 0;
}




