#include<stdio.h>
int main()
{
	long long small,big,temp;
	int M_day,day;
	scanf("%d",&M_day);
	while(M_day != 0)
	{
		small = 1;big = 0;
		for(day = 0;day < M_day;day ++)
		{
			temp = big;
			big = big + small;
			small = temp;
		}
		printf("%lld\n",big + small);
		scanf("%d",&M_day);
	}
	return 0;	
}
