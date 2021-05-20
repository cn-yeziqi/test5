#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{

	int year=100;
	int month;
	while(1)
	{
		printf("请输入年份");
		scanf("%d", &year);
		if (0 == year)
		{
			break;
		}
		printf("请输入月份");
		scanf("%d", &month);
		switch (month)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("该月为31天\n");
			break;
		case 4:		
        case 6:
		case 9:
		case 11:
			printf("该月为30天\n");
			break;
		case 2:
			if (0 == (year % 4) && (year % 100) != 0 || 0 == (year % 400))
				printf("该月为29天\n");
			else
				printf("该月为28天\n");
			break;
		}
	} 
		return 0;
	}
