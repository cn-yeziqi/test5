#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int S,s;//S为三种鸡相加总价钱.s为三种鸡相加总数
	int x,y, z;//x为公鸡数量,y为母鸡数量,z小鸡数量
		for (x = 1; x <= 20; x++)//x最多为20
		{
			for (y = 1; y <= 33; y++)//y最多33
			{
				for (z = 1; z <= 100; z++)//最多100
				{
					S = 5 * x + 3 * y + z / 3;
                    s = x + y + z;
					if (100 == S && 100 == s )
					{
						printf("公鸡可能有的数量: %d\n", x);
						printf("母鸡可能有的数量: %d\n", y);
					    printf("小鸡可能有的数量 :%d\n", z);
					}
				}
			}
	}
	return 0;
}