#include<stdio.h>
//18
int main()
{
	int n,i,min = 0,max = 0,temp;
	scanf("%d",&n);
	int a[n];
	for(i = 0;i < n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i = 1;i < n;i++)
	{
		if(a[i] < a[min])
			min = i;
	}
	temp = a[0]; 
	a[0] = a[min];
	a[min] = temp;
	for(i = 1;i < n;i++)
	{
		if(a[i] > a[max])
			max = i;
	}
	n--;
	temp = a[n]; 
	a[n] = a[max];
	a[max] = temp;
	for(i = 0;i <= n;i++)
	{
		printf("%d",a[i]);
		if(i != n)printf(" ");
	}
	return 0;
}
