#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
	int num[3],n,i;
	char * point,* black,str[10];
	while(1)
	{
		n = 0;
		num[2] = 1;
		gets(str);
		point = str;
		while(1)
		{
			if((black = strchr(point,' ')) != NULL)
			{
				*(black) = '\0';
				num[n++] = atoi(point);
				black += 1;
			}
			else
			{
				num[n++] = atoi(point);
				break;
			}
			point = black;	
		}
		if(num[0] == 0 && n == 1)
			break;
		else
		{
			if(n == 1)
				for(i = 1;i <= num[0];i++)
				{
					printf("%d",i);
					if(i != num[0])
						printf(" ");
				}
			else if(n == 2)
			{
				num[2] = num[0] > num[1]?-1:1;
				num[1] = num[0] > num[1]?num[1] - 1:num[1] + 1;
				for(i = num[0];i != num[1];i += num[2])
				{
					printf("%d",i);
					if(i != num[1] - num[2])
						printf(" ");
				}
			}
			else
				if(num[0] <= num[1])
				{
					num[2] = num[2] + 1;
					for(i = num[0];i <= num[1];i += num[2])
					{
						printf("%d",i);
						if(i < num[1] - num[2])
							printf(" ");
					}
				}
				else
				{
					num[2] = num[2] + 1;
					for(i = num[0];i >= num[1];i -= num[2])
					{
						printf("%d",i);
						if(i > num[1] + num[2])
							printf(" ");
					}
				}
			printf("\n");
		}
	}
    return 0;
}

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<ctype.h>
//int main()
//{
//	int num[3],n,i;
//	char * point,* black,str[10];
//	while(1)
//	{
//		n = 0;
//		num[2] = 1;
//		gets(str);
//		point = str;
//		while(1)
//		{
//			if((black = strchr(point,' ')) != NULL)
//			{
//				*(black) = '\0';
//				num[n++] = atoi(point);
//				black += 1;
//			}
//			else
//			{
//				num[n++] = atoi(point);
//				break;
//			}
//			point = black;	
//		}
//		if(num[0] == 0 && n == 1)
//			break;
//		else
//		{
//			if(n == 1)
//				for(i = 1;i <= num[0];i++)
//				{
//					printf("%d",i);
//					if(i != num[0])
//						printf(" ");
//				}
//			else if(n == 2)
//			{
//				num[2] = num[0] > num[1]?-1:1;
//				num[1] = num[0] > num[1]?num[1] - 1:num[1] + 1;
//				for(i = num[0];i != num[1];i += num[2])
//				{
//					printf("%d",i);
//					if(i != num[1])
//						printf(" ");
//				}
//			}
//			else
//				if(num[0] <= num[1])
//				{
//					num[2] = num[2] + 1;
//					for(i = num[0];i <= num[1];i += num[2])
//					{
//						printf("%d",i);
//						if(i != num[1])
//							printf(" ");
//					}
//				}
//				else
//				{
//					num[2] = num[2] + 1;
//					for(i = num[0];i >= num[1];i -= num[2])
//					{
//						printf("%d",i);
//						if(i != num[1])
//							printf(" ");
//					}
//				}
//			printf("\n");
//		}
//	}
//    return 0;
//}

