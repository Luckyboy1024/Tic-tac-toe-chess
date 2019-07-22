#include "game.h"


void menu()
{
	printf("□□□□□□□□□□□□□□□□□□\n");
	printf("□		1. 新游戏                □\n");
	printf("□		0. 退出游戏		        □\n");
	printf("□□□□□□□□□□□□□□□□□□\n");
	printf("□□□□□□□□□□□□□□□□□□\n");
	printf("\n\n\n\n");
	printf("请输入:>_");
}


void menu1()
{
	printf("*************************************\n");
	printf("**			1.先手				**\n");
	printf("**			2.后手				**\n");
	printf("**			0.退出				**\n");
	printf("*************************************\n");
}

int main()
{
	int input = 0;
	do
	{
		menu();
		scanf(input);
		switch (input)
		{
		case 1:
			menu1();
			break;
		case 2:
		case 0:
			return 0;
			break;
		default:
			break;
		}
	} while (input);
	return 0;
}