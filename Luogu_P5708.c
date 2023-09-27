
#include<stdio.h>
#include<math.h>
int main()
{
	double a;
	double b;
	double c;
	double p;
	double s;
	scanf("%lf %lf %lf", &a, &b, &c);
	p = (a + b + c) / 2.0;
	double ans = sqrt(p * (p - a) * (p - b) * (p - c));
	printf("%.1lf", ans);
	return 0;
}
