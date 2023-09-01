#include <stdio.h>
int main()
{
	int num = 0;
	while (num < 100)
	{
		if (0 == num % 2)
			;
		else
			printf("%d\n", num);
		num++;
     }
	return 0;
}
//求出0-100内的奇数，用于分支语句和循环语句的练习
//Find the odd number in 0-100, for branch statements and loop statements practice
