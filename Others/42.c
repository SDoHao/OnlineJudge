#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	double delta;
	scanf("%d %d %d",&a,&b,&c);
	delta = sqrt(b * b - 4 * a * c);
	printf("%.2lf %.2lf",(-b + delta) / 2 / a,(-b - delta) / 2 / a);
	return 0;
}
