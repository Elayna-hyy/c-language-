#include <stdio.h>
#include<stdlib.h>
#include<time.h>

//将函数结果和状态分开的例子
/*int remainder(int num1, int num2, int res)
{
	if (num2 == 0)//因此要写一个判断，但是必须要返回一个值，由于是求余数，所以返回多少都不合适
	{
		return ?:
	}
	res = num1 % num2;//假如num2=0时就报错了
	return res;
}*/
int remainder(int num1, int num2, int* res)
{
	if (num2 == 0)
	{
		return 1;
	}
	*res = num1 % num2;//此时写成用返回值表示状态，0正常 1不正常，就可以了
	return 0;
}

int main()
{
	int a = 10;
	int b = 4;
	int res = 0;
	int flag = remainder(a, b, &res);
	//对状态进行判断
	if (flag == 0)
	{
		printf("the remainder is %d\n", res);
	}



	system("pause");
	return 0;
}




