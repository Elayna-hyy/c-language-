#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	printf("please input a num(1~100)\n");
	srand(time(NULL));
	int random = rand() % 100 + 1; 
	int guess = 0;

	while (1)
	{
		scanf("%d", &guess);
		if (random > guess)
		{
			printf("less\n");
		}
		else if (random < guess)
		{
			printf("more\n");
		}
		else
		{
			printf("yes\n");
			break;
		}
	}
	


	system("pause");
	return 0;
}