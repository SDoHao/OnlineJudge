#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
struct student
{
	char id[11];
	char name[11];
	int score;
};
typedef struct student student;

int main()
{
	int n;
	scanf("%d", &n);
	student stu,min_stu,max_stu;
	min_stu.score = 101;
	max_stu.score = -1;
	while (n-- > 0)
	{
		scanf("%s %s %d", &stu.name,&stu.id,&stu.score);
		if (stu.score < min_stu.score)
		{
			min_stu = stu;

		}
		if (stu.score > max_stu.score)
		{
			max_stu = stu;
		}
	}
	printf("%s %s\n", max_stu.name, max_stu.id);
	printf("%s %s\n", min_stu.name, min_stu.id);
	return 0;
}