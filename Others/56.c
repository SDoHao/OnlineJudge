#include<stdio.h>
int main()
{
	int AH,AM,AS;
	int BH,BM,BS;
	int CH,CM,CS;
	int t,flag = 1;
	scanf("%d:%d:%d",&AH,&AM,&AS);
	scanf("%d:%d:%d",&BH,&BM,&BS);
	if(BH == AH)
		{
			if (AM == BM)
			{
				if(AS > BS)
				flag = 0;
			}
			else if(AM > BM)
				flag = 0;	
		}
	else if(AH > BH)
		flag = 0;
	if(flag == 0)
		{
			t = AH;AH = BH;BH = t;
			t = AM;AM = BM;BM = t;
			t = AS;AS = BS;BS = t;
		}
	CS = BS - AS;
	if(CS < 0)
	{
		CS += 60;
		BM--;
	}
	CM = BM - AM;
	if(CM < 0)
	{
		CM += 60;
		BH--;
	}
	CH = BH - AH;
	printf("%d:%02d:%02d",CH,CM,CS);
	return 0;
}
