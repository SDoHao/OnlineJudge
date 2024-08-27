#include<stdio.h>
int main()
{
	int first = 0,second = 0,third = 0;
	int grade;
	scanf("%d",&grade);
	while(grade > 0)
	{
		if (grade >= 85)
			first++;
		else if(grade < 60)
			third++;
		else
			second++;
		scanf("%d",&grade);
	}
	printf(">=85:%d\n60-84:%d\n<60:%d\n",first,second,third);
	return 0;
}
