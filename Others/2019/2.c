#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,count = 0;
	for(i = 100;i < 200;i++)
	{
		for(j = 2;j < sqrt(i) + 1;j++)
			if(i % j == 0)
				break;
		if(j > sqrt(i) + 1)
		{
				count++;
				printf("%d ",i);
				if(count % 5 == 0)printf("\n");
		}
	}
	return 0;
}
