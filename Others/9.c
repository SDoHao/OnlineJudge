#include<stdio.h>
int main()
{
	char string[9],str2[5];
	int i,count,score,_case = 0,flag;
	while(scanf("%d%",&count) != EOF)
	{
		flag = score = 0;
		_case++;
		for(i = 0;i < count;i++)
		{
			scanf("%s %s",string,str2);
			if(strcmp(string,"Pleasant") == 0)
				score += 5;
			else if(strcmp(string,"Pretty") == 0)
				score += 8;
			else if(strcmp(string,"Athletic") == 0)
			{
				score += 10;
				flag = 1;
			}   
			else if(strcmp(string,"Lazy") == 0)
				score += 15;
			else if(strcmp(string,"Slow") == 0)
				score += 20;
		}
		if(count >= 10 && flag == 1)
			   score += 50; 
		printf("Case #%d: %d\n",_case,score);
	}
		
	return 0;
}
