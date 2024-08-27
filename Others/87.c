#include<stdio.h>
int main()
{
	int feet,max,min;
	scanf("%d",&feet);
	if(feet % 2 != 0)
		max = min = 0;
	else
	{
		max = feet / 2;
		min = feet / 4 + feet % 4 / 2;
	}
	printf("%d %d",min,max);
	return 0;
}
