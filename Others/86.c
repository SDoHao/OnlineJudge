# include <stdio.h>
int main()
{
	int num,_num,n,sum = 0;
	scanf("%d %d",&num,&n);
	_num = num;
	for(;n > 0;n--)
	{
		sum += num;
		num = num * 10 + _num;
	}
	printf("%d",sum);
	return 0;
}
