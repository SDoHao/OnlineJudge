#include<stdio.h>
struct Data
{
	int year;
	int month;
	int day;
};

int main()
{
	int sum;
	struct Data data;
	int EveryMonthDays[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d %d %d",&data.year,&data.month,&data.day);
	sum = data.day;
	if ((data.year % 400 == 0)||(data.year % 4 == 0 && data.year % 100 != 0))
		sum++;
	for(data.month -= 2;data.month >= 0 ;data.month--)
		sum += EveryMonthDays[data.month];
	printf("%d",sum);
	return 0;	
}

