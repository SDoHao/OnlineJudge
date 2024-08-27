#include<stdio.h>
struct Basket{
	int i;
	int apple;
	int pear;
}basket[100000];
int cmp(const void * a,const void * b)
{
	struct Basket * bask1 = (struct Basket *)a;
	struct Basket * bask2 = ((struct Basket *)b);
	int fruit1 = bask1->apple;
	int fruit2 = bask2->apple;
	if (fruit1 == fruit2)
	{
		fruit1 = bask1->pear;
		fruit2 = bask2->pear;
		if (fruit1 == fruit2)
			return bask1->i - bask2->i;
	}
	return fruit2 - fruit1;
}
int main()
{
	int i,t,n,m;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&m);
		for(i = 0;i < n;i++)
		{
			scanf("%d %d",&basket[i].apple,&basket[i].pear);
			basket[i].i = i + 1;
		}
		qsort(basket,n,sizeof(basket[0]),cmp);
		for(i = 0;i < m;i++)
		{
			printf("%d",basket[i].i);
			if(i != m - 1)printf(" ");
		}
		printf("\n");	
	}
	return 0;
}
