#include<stdio.h>
int main()
{
	int n;
	long long array[3] = {1,2,0};
	while(scanf("%d",&n) != EOF)
	{
		if(n == 0)
		{
			printf("0\n");
			continue;
		}
		else if(n > 2)
			for(;n > 2;n--)
			{
				array[2] = array[1] + array[0]; 
				array[0] = array[1];
				array[1] = array[2];
			}
		printf("%lld\n",array[--n]);
		array[0] = 1; 
		array[1] = 2;
	}
	return 0 ;
}
