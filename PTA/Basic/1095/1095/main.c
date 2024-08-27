#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

struct Student
{
	char* id[14];
	int score;
	char level;
};
typedef struct Student Student;

int main()
{
	int i,j,N,M,cmd;
	Student students[10000];
	scanf("%d %d", &N, &M);
	for (i = 0; i < N; i++)
	{
		scanf("%s %d", &students[i].id,&students[i].score);
	    students[i].level = students[i].id[0];
	}
	for (i = 0; i < M; i++)
	{
		scanf("%d %s",&cmd,




	}



	//for (i = 0; i < N; i++)
	//{
	//	printf("%s %d\n", students[i].level,students[i].score);
	//}
	return 0;
}