#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	printf("%d",x < 1?(x):(x >= 10?3 * x - 11:2 * x - 1));
	return 0 ;
}
