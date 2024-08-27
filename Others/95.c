#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct info
{
	char name[21];
	char sex[7];
	int year;
	int month;
	int day;
}Manager[30]; 
int main()
{
	char op[100],temp[21],y[5],m[3],d[3];;
	int info_num = 0,i;
	while(scanf("%s",&op) && strcmp(op,"quit"))
	{
		if(strcmp(op,"add") == 0)
		{
			scanf("%s %s %s %s %s",&Manager[info_num].name,&Manager[info_num].sex,&y,&m,&d);
			Manager[info_num].year = atoi(y);
			Manager[info_num].month = atoi(m);
			Manager[info_num].day = atoi(d);
			info_num++; 
		}
		else if(strcmp(op,"name") == 0)
		{
			scanf("%s",&temp);
			for(i = 0;i < info_num;i++)
				if(strcmp(Manager[i].name,temp) == 0)
				{
					printf("%s %s %d-%d-%d\n",Manager[i].name,Manager[i].sex,Manager[i].year,Manager[i].month,Manager[i].day);
					break;
				}
		}
		else if(strcmp(op,"sex") == 0)
		{
			scanf("%s",&temp);	
			for(i = 0;i < info_num;i++)
				if(strcmp(Manager[i].sex,temp) == 0)
				{
					printf("%s %s %d-%d-%d\n",Manager[i].name,Manager[i].sex,Manager[i].year,Manager[i].month,Manager[i].day);
				}
		}
	}
    return 0;
}
