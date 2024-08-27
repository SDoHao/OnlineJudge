#include<stdio.h>
typedef struct 
{
	double Score[3];
	char ID[10];
	char name[30];
}Student;
int cmp(const void * a, const void *b)
{
	Student * Sa = (Student *)a;
	Student * Sb = (Student *)b;
	double sum1,sum2;
	sum1 = sum2 = 0;
	int i = 0;
	for(;i < 3;i++)
	{
		sum1 = Sa->Score[i];
		sum2 = Sb->Score[i];
	}
	return sum2 - sum1;
}

int main()
{
	double average[3] = {0,0,0};
	int N,i = 0,j;
	scanf("%d%*c",&N);
	Student Stu[N];
	while(i < N)
	{
		scanf("%s %s %lf %lf %lf",&Stu[i].ID,&Stu[i].name,&Stu[i].Score[0],&Stu[i].Score[1],&Stu[i].Score[2]);
		i++;
	}
	for(i = 0;i < N;i++)
	{
		for(j = 0;j < 3;j++)
		{
			average[j] = average[j] + Stu[i].Score[j];
		}
	}
	for(j = 0;j < 2;j++)
	{
		printf("%.0lf ",average[j] / N);
	}
	printf("%.0lf\n",average[2] / N);
	qsort(Stu,N,sizeof(Stu[0]),cmp);
	printf("%s %s %.0lf %.0lf %.0lf\n",Stu[0].ID,Stu[0].name,Stu[0].Score[0],Stu[0].Score[1],Stu[0].Score[2]);
    return 0;
}

