#include<stdio.h>
int main()
{
	int EveryMonthDays[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int count,i,day,month;
	int back,after;
	int allow_days;
	scanf("%d",&count);
	int num[count];
	for(i = 0;i < count;i++)
	{
		scanf("%*c%*c%*c%*c%*c%*c%*c%d",&num[i]);
	}
	for(i = 0;i < count;i++)
	{
		num[i] = num[i] % 10;
		back = (num[i] + 1 + 10) % 10;
		after = (num[i] - 1 + 10) % 10;
		allow_days = 0;
		for(month = 0;month < 12;month++)
		{
			for (day = 1;day <= EveryMonthDays[month];day++)
			{
				if ((day % 10) != back && (day % 10) != after)
					allow_days ++;
			}
		}
		printf("%d",allow_days);
		if (i != count - 1 )
		{
			printf("\n");
		}
	}
	return 0;
}
