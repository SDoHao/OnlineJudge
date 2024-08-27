#include<stdio.h>
int main()
{
	int N,K,S,i,rep;
	scanf("%d",&N);
	while(N--)
	{
		scanf("%d %d",&K,&S);
		i = K;
		if(K > S)
			S--;
		else
			S++; 
		while(i != S) 
		{
			printf("%d frog",i);
			if(i > 1)
				printf("s have");
			else
				printf(" has");
			printf(" %d mouth",i);
			if(i > 1)printf("s");
			printf(", %d eyes and %d legs, jump",2 * i,4 * i);
			if(i == 1)printf("s");
			printf(" into the water with");
			if(i == 1)printf(" a");
			for(rep = i;rep > 0;rep--)
				printf(" splash");
			printf(".\n");
			if(K > S)
				i--;
			else
				i++; 
		}
	}
	return 0;
}
