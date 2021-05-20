#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a=0;
	int b = 0;
	int n;
	do
	{
		printf("*********************************************************\n");
		printf("                欢迎使用小型计算机                                 \n");
		printf("                 设计者: 叶瀚奇                                    \n");
		printf("*********************************************************\n");
		printf("                       1.加法计算                                  \n");
		printf("                       2.减法计算                                  \n");
		printf("                       3.乘法计算                                  \n");
		printf("                       4.除法计算                                  \n");
		printf("                       0.退出                                      \n");
		printf("*********************************************************\n");
		printf("\n");
		printf("请选择:");
		scanf("%d", &n);
		switch (n)
		{
			
		case 1:
        	printf("请输入两个数字");
			scanf("%d%d", &a, &b);
			printf("两数相加是: %d", a + b);
			break;
		case 2:
			printf("请输入两个数字");
			scanf("%d%d", &a, &b);
			printf("两数相减是: %d", a - b);
			break;
		case 3:
			printf("请输入两个数字");
			scanf("%d%d", &a, &b);
			printf("两数相乘是: %d", a * b);
			break;
		case 4:
        	printf("请输入两个数字");
            scanf("%d%d", &a, &b);
			printf("两数相除是: %6.2f", (float)a / b);
			break;
		case 0:
			break;
		}
	} while (n);
	return 0;
}