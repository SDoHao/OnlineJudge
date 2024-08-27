#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
struct examinee
{
	int number;
	int score1, score2;
};
typedef struct examinee examinee;

int main()
{
	int i, M, count = 0, prior, pass,number,sc1,sc2;
	scanf("%d %d %d", &M, &prior, &pass);
	examinee examees[100000];
	for (i = 0; i < M; i++)
	{
		scanf("%d %d %d", &number, &sc1, &sc2);
		if (sc1 >= pass && sc2 >= pass)
		{
			examees[i].number = number;
			examees[i].score1 = sc1;
			examees[i].score2 = sc2;
			count++;
		}
	}

	return 0;
}