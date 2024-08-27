#include<stdio.h>
#include<string.h>
struct Charc
{
	char c[100];
}charc[3];
int cmp(const void * a,const void * b)
{
	return strcmp(((struct Charc *)a)->c,((struct Charc *)b)->c);
}
int main()
{
	int i;
	for(i = 0;i < 3;i++)
		scanf("%s",&charc[i].c);
	qsort(charc,3,sizeof(charc[0]),cmp);
	for(i = 0;i < 3;i++)
		printf("%s\n",charc[i].c);
    return 0;
}

