#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    char ch;
	for ( ch=0; ch != '#';)
	{
		printf("请输入");
		ch = getchar();
		getchar();
		if (ch >= 'A' && ch <= 'Z')
			printf("大写字母\n");
		else if (ch >= 'a' && ch <= 'z')
			printf("小写字母\n");
		else if (ch >= '0' && ch <= '9')
			printf("数字\n");
		else
			printf("其他字符\n");
	}
	return 0;
}
