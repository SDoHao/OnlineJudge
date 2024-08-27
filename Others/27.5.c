#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,i,j;
	long long sum;
	while(scanf("%d %d",&a,&b) != EOF)
	{
		if(a > b){i = a;a = b;b = i;} 
		sum = 0;
		if(a < 2)
		{
			a = 1;
			if(b > 2)sum = 2;
		}
		for(i = a + 1;i < b;i++)
		{
			for(j = 2;j < sqrt(i) + 1;j++)
				if(i % j == 0)break;
			if(j >= sqrt(i) + 1)sum += i;
		}
		printf("%lld\n",sum);
	}
	return 0;
}
