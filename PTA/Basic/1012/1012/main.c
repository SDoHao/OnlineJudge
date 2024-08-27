#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, re, f1, f2, f3, f4, f5, n;
	int i = 0,sum1 = 0, sum2 = 0, op2 = 1, count3 = 0, sum4 = 0, count4 = 0, max5 = 0;
	f1 = f2 = f3 = f4 = f5 = 0;
	scanf("%d", &n);
	while (scanf("%d", &a) != EOF)
	{
		re = a % 5;
		if (re == 0 &&  ((a & 1) == 0))
		{
			f1 = 1;
			sum1 += a;
		}
		else if (re == 1)
		{
			f2 = 1;
			sum2 = sum2 + op2 * a;
			op2 *= -1;
		}
		else if (re == 2)
		{
			f3 = 1;
			count3++;
		}
		else if (re == 3)
		{
			f4 = 1;
			sum4 += a;
			count4++;
		}
		else if (re == 4)
		{
			f5 = 1;
			if (a > max5)
				max5 = a;
		}
	}
	if (f1)
		printf("%d ", sum1);
	else
		printf("N ");
	if (f2)
		printf("%d ", sum2);
	else
		printf("N ");
	if (f3)
		printf("%d ", count3);
	else
		printf("N ");
	if (f4)
		printf("%.1f ", sum4 / (1.0 * count4));
	else
		printf("N ");
	if (f5)
		printf("%d", max5);
	else
		printf("N");
	//printf("%d %d %d %.1f %d",sum1,sum2,count3,sum4 / (1.0 * count4),max5);
	return 0;
}