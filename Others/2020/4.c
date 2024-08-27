#include<stdio.h>
int main()
{
	long num,product;
	int i;
	while (scanf("%ld",&num) != EOF)
	{
		i = 1;
		product = num * num - num;
		while(num)
		{
			i *= 10;
			num = num  / 10;
		}
		if (product % i == 0)
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;	
}
