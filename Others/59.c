#include<stdio.h>
int main()
{
	int a,b,temp,mul;
	scanf("%d %d",&a,&b);
	mul = a * b;
	if(a > b){temp = a;a = b;b = temp;}
	temp = b % a;
	while(temp)
	{
		a = temp;
		b = a;
		temp = b % a;
	}
	printf("%d %d\n",mul / a,a);
	return 0;
}
