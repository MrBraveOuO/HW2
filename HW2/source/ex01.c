#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int ex01()
{
	int account;
	float b_balance, charges, credit, limit,n_balance;
	while (1)
	{
		printf("Enter account number (-1 to end):");
		scanf("%d", &account);
		if (account == -1)
		{
			break;
		}
		printf("\nEnter beginning balance:");
		scanf("%f", &b_balance);
		printf("\nEnter total charges:");
		scanf("%f", &charges);
		printf("\nEnter total credits:");
		scanf("%f", &credit);
		printf("\nEnter credit limit:");
		scanf("%f", &limit);
		n_balance = b_balance + charges - credit;
		if (n_balance > limit)
		{
			printf("\nAccount:%d", account);
			printf("\nCredit limit:%.2f", limit);
			printf("\nAccount:%.2f", n_balance);
			printf("\nCredit Limit Exceeded.");
		}
		printf("\n\n");
	}
	return 0;
}
int ex02()
{
	float dollars;
	while (1)
	{
		printf("Enter sales in dollars (-1 to end):");
		scanf("%f",&dollars);
		if (dollars == -1)
		{
			break;
		}
		printf("\nSalary is:$%.2f\n\n",200+dollars*9/100);
	}
	return 0;
}
int ex03()
{
	int days;
	float principal,rate,charge;
	while (1)
	{
		printf("Enter loan principal (-1 to end):");
		scanf("%f", &principal);
		if (principal == -1)
		{
			break;
		}
		printf("\nEnter interest rate:");
		scanf("%f", &rate);
		printf("\nEnter term of the loan in days:");
		scanf("%d", &days);
		printf("\nThe interest charge is $%.2f",principal*rate*days/365);
		printf("\n\n\n");
	}
	return 0;
}
int ex04()
{
	int hours;
	float rate,salary;
	while (1)
	{
		printf("Enter # of hours worked (-1 to end):");
		scanf("%d", &hours);
		if (hours == -1)
		{
			break;
		}
		printf("Enter hourly rate of the worker ($00.00):");
		scanf("%f", &rate);
		if (hours <= 40)
		{
			salary = rate*hours;
		}
		else if (hours > 40)
		{
			salary = rate*40+1.5*rate*(hours-40);
		}
		printf("\nSalary is $%.2f\n\n",salary);
	}
	return 0;
}
int ex05()
{
	int length,breadth;
	printf("length:");
	scanf("%d",&length);
	printf("\nbreadth:");
	scanf("%d",&breadth);
	printf("\n");
	for (int i = 0;i<length;i++)
	{
		if (i == 0 || i == length - 1)
		{
			for (int j = 0; j < breadth; j++)
			{
				printf("*");
			}
		}
		else
		{
			for (int k = 0; k < breadth; k++)
			{
				if (k == 0 || k == breadth - 1)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
		}
		printf("\n");
	}
	return 0;
}
int ex06()
{
	float rate=0.1;
	float money=1;
	printf("invest $5000 for 15 years\n");
	for (int i=0;i<4;i++)
	{
		for (int j = 0; j < 15; j++)
		{
			money = money * (1 + rate);
		}
		printf("for interest rates %.1f%% is %.2f\n",rate*100,5000*money);
		rate = rate + 0.005;
		money = 1;
	}
	return 0;
}
int ex07()
{
	int star = 1;
	int white = 0;
	int mode = 0;
	for (int i = 0; i < 4; i++)
	{

		for (int row = 0; row < 10; row++)
		{
				for (int j = 0; j < white; j++)
				{
					printf(" ");
				}
				for (int k = 0; k < star; k++)
				{
					printf("%s","*");
				}
				printf("\n");
				if (row != 9)
				{
					switch (mode)
					{
					case 0:
						star++;
						break;
					case 1:
						star--;
						break;
					case 2:
						white++;
						star--;
						break;
					case 3:
						white--;
						star++;
						break;
					}
				}
				
		}
			mode++;
		if (mode == 2)
		{
			star = 10;
		}
		printf("\n\n");
	}
	return 0;
}
int ex08()
{
	int a, b, c,d;
	for (int i = 1; i <= 100; i++)
	{
		for (int j = 1; j <= 100; j++)
		{
			for (int k = 1; k <= 100; k++)
			{
				c = i;
				b = j;
				a = k;
				d = a * a + b * b;
				if (a<=b && a*b / 2 <= 500 && d == c * c)
				{
					printf("a=%3d,b=%3d,c=%3d\n",a,b,c);
				}
			}
		}
	}
	return 0;
}
int ex09()
{
	int epy_type,hours,amount;
	float salary,rate;
	while (1)
	{
		printf("Enter the code of employee(-1 to end)\n");
		scanf("%d", &epy_type);
		if (epy_type==-1)
		{
			break;
		}
		switch (epy_type)
		{
		case 1:
			printf("Enter manager's weekly salary:");
			scanf("%f",&salary);
			printf("\nSalary is %.2f",salary);
			break;
		case 2:
			printf("Enter # of hours worked this week:");
			scanf("%d", &hours);
			printf("\nEnter hourly rate of the worker ($00.00):");
			scanf("%f", &rate);
			if (hours <= 40)
			{
				salary = rate * hours;
			}
			else if (hours > 40)
			{
				salary = rate * 40 + 1.5*rate*(hours - 40);
			}
			printf("\nSalary is $%.2f", salary);
			break;
		case 3:
			printf("Enter sales in dollars:");
			scanf("%f",&salary);
			printf("\nSalary is %.2f",250+salary*57/1000);
			break;
		case 4:
			printf("Enter amount of the items:");
			scanf("%d",&amount);
			printf("\nEnter the pay for each item:");
			scanf("%f",&salary);
			printf("\nSalary is %.2f",amount*salary);
			break;
		}
		
		printf("\n\n");
	}
	return 0;
}
int ex10()
{
	int white = 4;
	int star = 1;
	int mode = 0;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < white; j++)
		{
			printf(" ");
		}
		for (int k = 0; k < star; k++)
		{
			printf("*");
		}
		if (white == 0)
		{
			mode = 1;
		}
		if (mode == 0)
		{
			white--;
			star = star + 2;
		}
		if (mode == 1)
		{
			white++;
			star = star - 2;
		}
		printf("\n");
	}
	return 0;
}