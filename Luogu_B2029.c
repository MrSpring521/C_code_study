#include<stdio.h>
int main()
{
	int h;
	int r;
	float pi = 3.14;
	float v;
	int num;
	scanf("%d %d", &h, &r);
	v = h * r * r * pi;
	num = 20000 / v+ 1;
	printf("%d", num);
	return 0;
}
