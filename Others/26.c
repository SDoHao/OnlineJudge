#include<stdio.h>
int main()
{
	float F;
	while(scanf("%f",&F) != EOF)
		printf("%.2f",5.0 / 9 * ( F - 32));
	return 0;
}
