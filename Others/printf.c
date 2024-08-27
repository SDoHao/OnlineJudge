#include<stdio.h>
int main()
{
	int a = 2;
	printf("%d\n",a);
	a = 2;
	printf("%d %d\n",a,++a);
	a = 2;
	printf("%d %d %d\n",a,++a,--a);
	printf("%d---%d---%d",printf("ab"),printf("c"),printf("eee"));
	return 0;
}
