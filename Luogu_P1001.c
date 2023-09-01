#include <stdio.h>
int Add(int x, int y)
{
	int z = x + y;
	return z;
}
int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	scanf("%d%d", &num1, &num2);
	sum = Add(num1, num2);
	printf("%d\n", sum);
    return 0;
}
//time:30ms  用时：30ms
//RAM：784KB 内存：784KB
