#include<stdio.h>
#include<ctype.h>
#include<string.h>
int GetOp(char ch)
{
	if(ch == '-')return -1;
	else if(ch == '+')return 1;
} 
 
int main()
{
	int sum,count,num,sign,i,len;
	char ch[1000];
	scanf("%d",&count);
	while(count--)
	{
		i = num = sum = 0;
		sign = 1;
		scanf("%s",&ch);
        len = strlen(ch);
		while(i < len)
		{
			if(isdigit(ch[i]))
			{
				num = num * 10 + ch[i] - '0';
			}
			else
			{
				sum = sum + sign * num;
				num = 0;
				sign = GetOp(ch[i]);
			}
			i++;
		}
		sum = sum + sign * num;
		printf("%d\n",sum);
	}
	return 0;
}
//#include<stdio.h>
//#include<ctype.h>
//int GetOp(char ch)
//{
//	if(ch == '-')return -1;
//	else if(ch == '+')return 1;
//} 
//
//int main()
//{
//	int sum,count,num,sign;
//	char ch;
//	scanf("%d%",&count);
//	while(count--)
//	{
//		num = sum = 0;
//		sign = 1;
//		while((ch = getchar()) != '\n' && ch != '\0')
//		{
//			if(isdigit(ch))
//			{
//				num = num * 10 + ch - '0';
//			}
//			else
//			{
//				sum = sum + sign * num;
//				num = 0;
//				sign = GetOp(ch);
//			}
//		}
//		sum = sum + sign * num;
//		printf("%d\n",sum);
//	}
//	return 0;
//}
