//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#define max 100
//
//struct linkman
//{
//	char name[20];
//	int sex;
//	int age;
//	char phone[12];
//	char address[20];
//};
//
//struct roster
//{
//	struct linkman arr[max];
//	int size;
//};
//
//void showmenu();
//void add(struct roster* rs);
//void display(struct roster* rs);
//
//int main()
//{
//	struct roster rs;
//	rs.size = 0;
//	int choice = 0;
//	
//	while (1)
//	{
//		showmenu();
//		scanf("%d", &choice);
//		switch (choice)
//		{
//		case 1:
//			add(&rs);
//			break;
//		case 2:
//			display(&rs);
//			break;
//		case 3:
//			break;
//		case 4:
//			break;
//		case 5:
//			break;
//		case 6:
//			break;
//		case 0:
//			printf("您已成功退出，欢迎下次使用\n");
//			system("pause");
//			return 0;
//			break;
//		default:
//			printf("请重新输入选择的程序（0~6）：");
//			break;
//		}
//	}
//
//	return 0;
//}
//
//void showmenu() 
//{
//	printf("----------------------\n");
//	printf("1.添加联系人\n");
//	printf("----------------------\n");
//	printf("2.显示联系人\n");
//	printf("----------------------\n");
//	printf("3.删除联系人\n");
//	printf("----------------------\n");
//	printf("4.查找联系人\n");
//	printf("----------------------\n");
//	printf("5.修改联系人\n");
//	printf("----------------------\n");
//	printf("6.清空联系人\n");
//	printf("----------------------\n");
//	printf("0.退出通讯录\n");
//	printf("----------------------\n");
//	printf("请选择操作：");
//}
//
//void add(struct roster *rs)
//{
//	if (rs->size == max)
//	{
//		printf("人数已满 无法添加\n");
//	}
//	
//	printf("请输入联系人姓名:");
//	scanf("%s", rs->arr[rs->size].name);
//
//	printf("请输入联系人性别:(0--女 1--男)");
//	scanf("%d", &rs->arr[rs->size].sex);
//
//	printf("请输入联系人年龄:");
//	scanf("%d", &rs->arr[rs->size].age);
//
//	printf("请输入联系人号码:");
//	scanf("%s", rs->arr[rs->size].phone);
//
//	printf("请输入联系人地址:");
//	scanf("%s", rs->arr[rs->size].address);
//
//	printf("已成功添加一名联系人!");
//	rs->size++;
//
//	system("cls");
//	system("pause");
//}
//
//void display(struct roster* rs)
//{
//	if (rs->size == 0)
//	{
//		printf("无联系人，请添加后重试\n");
//	}
//
//	for (int i = 0; i < rs->size; i++)
//	{
//		printf("联系人姓名为：%s\n", rs->arr[i].name);
//		printf("联系人性别为：%s\n", rs->arr[i].sex == 1 ? "男" : "女");
//		printf("联系人年龄为：%d\n", rs->arr[i].age);
//		printf("联系人号码为：%s\n", rs->arr[i].phone);
//		printf("联系人地址为：%s\n", rs->arr[i].address);
//	}
//	system("pause");
//	system("cls");
//}