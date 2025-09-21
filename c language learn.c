#include <stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>


struct spot
{
	char name[100];
	int count;
};




int main()
{
	struct spot arr[4] = { {"A",0} ,{ "B",0 }, { "C",0 }, { "D",0 } };
	srand(time(NULL));
	for (int i = 0; i < 80; i++)
	{
		//choose既表示投票也表示索引
		int choose = rand() % 4;
		arr[choose].count++;
	}

	
	for (int i = 0; i < 4; i++)
	{
		struct spot temp = arr[i];
		printf("%s %d\n", temp.name,temp.count);
	}

	int max = arr[0].count;
	for (int i = 0; i < 4; i++)
	{
		if (arr[i].count < arr[i+1].count)
		{
			max = arr[i + 1].count;
		}
	}

	for (int i = 0; i < 4; i++)
	{
		struct spot temp = arr[i];
		if (temp.count==max)
		{
			printf("投票数最多的景点为%s，共计：%d张票\n", arr[i].name, arr[i].count);
			break;
		}
	}



	
	
	
	

	system("pause");
	return 0;
}

