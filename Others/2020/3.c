#include<stdio.h>
int main()
{
	double total,cash,rate = 1.000,temp;
	int month,i,flag = 0;
	scanf("%lf %d %lf",&total,&month,&cash);
	temp = total;
	while(1)
	{
		if  (rate < 1 || rate > 2)
			break;
		total = temp;
		for(i = 0;i < month;i++)
		{
			total = total * rate - cash;
		}
		if (total < 1e-4 && total > -1e-4)
			break;
		else 
			if (total > 0)
				{
					if (flag < 0)
						break;
					else if (flag == 0)
						flag = 1;
					rate -= 0.0000001;
				}
			else
			{	
				if (flag > 0)
					break;
				else if (flag == 0)
					flag = -1;
				rate += 0.0000001;	
			}
	}
	printf("%.3lf%%\n",(rate - 1) * 100 );
	return 0;
}
