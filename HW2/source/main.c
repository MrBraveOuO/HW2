#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "../include/ex01.h"


int main()
{
	int exchoose;

	for (int i = 0; i <= 1; i)
	{
		printf("電子三甲 109360108 姚其言\n\n");
		printf("請選擇練習題號1~10(0 to end)\n");
		scanf("%d", &exchoose);
		printf("\n");
		switch (exchoose)
		{
		case 1:
			ex01();
			break;
		case 2:
			ex02();
			break;
		case 3:
			ex03();
			break;
		case 4:
			ex04();
			break;
		case 5:
			ex05();
			break;
		case 6:
			ex06();
			break;
		case 7:
			ex07();
			break;
		case 8:
			ex08();
			break;
		case 9:
			ex09();
			break;
		case 10:
			ex10();
			break;
		case 0:
			printf("ByeBye");
			return 0;
		default:
			printf("輸入錯誤請重新輸入");
			break;
		}
		printf("\n--------------------------------------------------------------------------------------------------------------\n");
	}



	return 0;
}