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
	printf("修改前数据为：%s,%d\n", (*p).name, (*p).age);
	printf("请输入名字\n");
	scanf("%s", (*p).name);
	printf("请输入年龄\n");
	scanf("%d", &((*p).age));
	printf("修改后数据为：%s,%d\n", (*p).name, (*p).age);
}

int main()
{
	//细节：函数中写结构体类型的变量，相当于是定义了一个新变量
	//		  ：在函数中仅仅修改了st的值，对于main函数中的s1并没有修改
	
	S stu;
	strcpy(stu.name, "aaa");
	stu.age = 0;
	printf("初始数据:%s,%d\n", stu.name, stu.age);
	alter(&stu);
	printf("结尾数据:%s,%d\n", stu.name, stu.age);

	system("pause");
	return 0;
}

