#include<stdio.h>
int isLeap(int year)
{
	return ((year % 100 != 0 && year % 4 == 0)||(year % 400 == 0));
}

int main()
{
	int EveryMonthDays[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int year,month,day,alldays,i;
	while(1)
	{
		scanf("%d %d %d",&year,&month,&day);
		if(year == 0 || month == 0 || day == 0)
			break;
		alldays = day - 1;
		i = 1964;
		while(++i < year)
		{
			alldays += 365;
			if(isLeap(i))
				alldays++;
		}
		if(isLeap(year))
			EveryMonthDays[1] = 29;
		i = 0;
		while(++i < month)
			alldays += EveryMonthDays[i - 1];
		alldays = (5 + alldays % 7) % 7;
		if(alldays == 0)alldays = 7; 
		printf("%d\n",alldays);
		EveryMonthDays[1] = 28;
	}
	return 0;	
}
