#include<stdio.h>
typedef struct
{
	int score;
	int id;
}stu;

int cmp(const void * a,const void * b)
{
	return (*(stu *)a).id - (*(stu *)b).id;
}

int main()
{
	int n,m,i;
	scanf("%d %d",&n,&m);
	stu Stu[n + m];
	for(i = 0;i < n + m;i++)
	{
		scanf("%d %d",&Stu[i].id,&Stu[i].score);
	}
	qsort(Stu,n + m,sizeof(Stu[0]),cmp);
	for(i = 0;i < n + m;i++)
	{
		printf("%d %d\n",Stu[i].id,Stu[i].score);
	}
	return 0;
}
