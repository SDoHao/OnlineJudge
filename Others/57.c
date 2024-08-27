#include<stdio.h>
#include<math.h>
int main()
{
	int num,i,j,k,mid,max;
	scanf("%d",&mid);
	num = mid * 2 - 1;
	for(i = 1;i <= num;i++)
	{
	 	for(j = 0;j < abs(mid - i);j++)
	 		printf(" ");
	 	max = num - 2 * abs(mid - i);
		for(j = 1;j <= max;j++)
		{
			if(j > max / 2)
				k = max - j + 1;
			else
				k = j;
			printf("%d",k);
		}	
		printf("\n");
	}
	return 0 ;
}
//    1
//   121
//  12321
// 1234321
//123454321
// 1234321
//  12321
//   121
//    1
