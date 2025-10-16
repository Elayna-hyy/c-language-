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
//			printf("���ѳɹ��˳�����ӭ�´�ʹ��\n");
//			system("pause");
//			return 0;
//			break;
//		default:
//			printf("����������ѡ��ĳ���0~6����");
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
//	printf("1.�����ϵ��\n");
//	printf("----------------------\n");
//	printf("2.��ʾ��ϵ��\n");
//	printf("----------------------\n");
//	printf("3.ɾ����ϵ��\n");
//	printf("----------------------\n");
//	printf("4.������ϵ��\n");
//	printf("----------------------\n");
//	printf("5.�޸���ϵ��\n");
//	printf("----------------------\n");
//	printf("6.�����ϵ��\n");
//	printf("----------------------\n");
//	printf("0.�˳�ͨѶ¼\n");
//	printf("----------------------\n");
//	printf("��ѡ�������");
//}
//
//void add(struct roster *rs)
//{
//	if (rs->size == max)
//	{
//		printf("�������� �޷����\n");
//	}
//	
//	printf("��������ϵ������:");
//	scanf("%s", rs->arr[rs->size].name);
//
//	printf("��������ϵ���Ա�:(0--Ů 1--��)");
//	scanf("%d", &rs->arr[rs->size].sex);
//
//	printf("��������ϵ������:");
//	scanf("%d", &rs->arr[rs->size].age);
//
//	printf("��������ϵ�˺���:");
//	scanf("%s", rs->arr[rs->size].phone);
//
//	printf("��������ϵ�˵�ַ:");
//	scanf("%s", rs->arr[rs->size].address);
//
//	printf("�ѳɹ����һ����ϵ��!");
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
//		printf("����ϵ�ˣ�����Ӻ�����\n");
//	}
//
//	for (int i = 0; i < rs->size; i++)
//	{
//		printf("��ϵ������Ϊ��%s\n", rs->arr[i].name);
//		printf("��ϵ���Ա�Ϊ��%s\n", rs->arr[i].sex == 1 ? "��" : "Ů");
//		printf("��ϵ������Ϊ��%d\n", rs->arr[i].age);
//		printf("��ϵ�˺���Ϊ��%s\n", rs->arr[i].phone);
//		printf("��ϵ�˵�ַΪ��%s\n", rs->arr[i].address);
//	}
//	system("pause");
//	system("cls");
//}