#include<stdio.h>
#include<math.h>
int main()
{
	int num,i,j,mid;
	scanf("%d",&mid);
	num = mid * 2 - 1;
	for(i = 1;i <= num;i++)
	{
	 	for(j = 0;j < abs(mid - i);j++)
	 		printf(" ");
		for(j = 0;j < num - 2 * abs(mid - i);j++)
	 		printf("*");
		printf("\n");
	}
	return 0 ;
}


//1111*
//111***
//11*****
//1*******
//*********
//1*******
//11*****
//111***
//1111*
