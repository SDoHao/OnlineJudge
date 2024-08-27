#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int steps,num;
	scanf("%d",&num);
	steps = 0;
	while (num != 1)
	{
		if ((num & 1) == 0)
		{
			num = num / 2;
		}
		else
		{
			num = (3 * num + 1) / 2;
		}
		steps++;
	}
	printf("%d", steps);
	return 0;
}