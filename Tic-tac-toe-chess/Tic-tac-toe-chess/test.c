#include "game.h"


void menu()
{
	printf("������������������������������������\n");
	printf("��		1. ����Ϸ                ��\n");
	printf("��		0. �˳���Ϸ		        ��\n");
	printf("������������������������������������\n");
	printf("������������������������������������\n");
	printf("\n\n\n\n");
	printf("������:>_");
}


void menu1()
{
	printf("*************************************\n");
	printf("**			1.����				**\n");
	printf("**			2.����				**\n");
	printf("**			0.�˳�				**\n");
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