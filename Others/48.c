# include <stdio.h>
int main()
{
	int n,temp;
	double sum = 0;
	int numerator = 2;//·Ö×Ó
	int denominator = 1;//·ÖÄ¸
	scanf("%d",&n);
	for(;n > 0;n--)
	{
		sum += numerator * 1.0 / denominator;
		temp = numerator;
		numerator = numerator + denominator;
		denominator = temp;
	}
	printf("%.6lf",sum);
	return 0;	
}
