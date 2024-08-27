#include<stdio.h>
#include<math.h>
#include<string.h>
int is_Palindrome(int digit)
{
	char str[6],n,i;
	sprintf(str,"%d",digit);
	n = strlen(str);
	for(i = 0;i < n / 2;i++)
	{
		if(str[i] != str[n - 1 - i])
			return 0;
	}
	return 1;
}
int main()
{
	int m,n,i,j,count = 0;
	double sqrt_i;
	scanf("%d %d",&m,&n);
	for(i = m;i < n;i++)
	{
		sqrt_i = sqrt(i);
		for(j = 2;j <= sqrt_i + 1;j++)
		{
				if(i % j == 0)
					break;
		}
		if(j>=sqrt_i + 1)
		{
			if(is_Palindrome(i))
			{
				printf("%6d",i);
				if(++count % 5 == 0)
					printf("\n");
			} 
		}
	}
    return 0;
}
