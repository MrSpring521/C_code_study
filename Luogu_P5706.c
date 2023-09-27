#include<stdio.h>
int main()
{
	int a;
	float b;
	float c;
	int d;
	scanf("%f %d", &b, &a);
	c = b / a;
	d = a * 2;
	printf("%.3f\n%d", c, d);
	return 0;
}
