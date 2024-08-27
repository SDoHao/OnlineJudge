#include <stdio.h>
int main()
{
	int a[6],max,min,i;
	float average;
	while(scanf("%d %d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5]) != EOF)
	{
		max = min = 0;
		for(i = 0;i < 6;i++)
		{
			if(a[i] < a[min])
				min = i;
		}
		a[min] = a[0];
		a[0] = 0;
		for(i = 1;i < 6;i++)
		{
			if(a[i] > a[max])
				max = i;
		}
		a[max] = 0;
		average = (a[0] + a[1] + a[2] + a[3] + a[4] + a[5]) / 4.0;
		printf("%g\n",average);
	}		
	return 0;				
}

//#include <stdio.h>
//int cmp(const void * a,const void * b)
//{
//    return *(int *)a - *(int *)b;
//}
// 
// int main()
// {
//	int a[6];
//	float average;
//	while(scanf("%d %d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5]) != EOF)
//	{
//		qsort(a,6,sizeof(int),cmp);
//		average = (a[1] + a[2] + a[3] + a[4]) / 4.0;
//		printf("%g\n",average);
//	}		
//	return 0;				
//}
