#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int N, M,array[100],st,ed,temp;
	scanf("%d %d",&N,&M);
	for (st = 0; st < N; st++)
		scanf("%d", &array[st]);
	temp = N - M % N;
	for (st = temp; st < N; st++)
		printf("%d ", array[st]);
	for (ed = 0; ed < temp; ed++)
	{
		printf("%d", array[ed]);
		if (ed != temp - 1)
			printf(" ");
	}
	return 0;
}