#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char ch[100];
	int n,i,j,k;
	while((scanf("%[^\n]%*c",&ch) != EOF))
	{
		n = strlen(ch);
		for(j = i = 0;j <= n;)
			if(isalnum(ch[j]))
				j++;
			else
			{
				for(k = j - 1;k >= i;k--)
					printf("%c",ch[k]);
				if(j != n)
				{
					printf("%c",ch[j]);
				}
				i = ++j;
			}
		printf("\n");
	}
	return 0;
}
