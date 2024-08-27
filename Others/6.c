#include<stdio.h>
#include<string.h>
int main() 
{
	int count,i,n,a[101],b[101],max,min,flag;
	float step,dis; 
	scanf("%d",&count);
	while (count--)
	{
		scanf("%d",&n);
		flag = min = 0;
		for (i = 0; i < n; i++)
		{
			scanf("%d%d",&a[i],&b[i]);
			if(b[i] - a[i] > min)min = b[i] - a[i];
		}
		a[n] = b[n] = 50001;
		step = min * 1.0;
		max = a[2]  - b[0];
		for (i = 1; i < n - 2; i++)
		{
			if(a[i + 2] - b[i] < max)max = a[i + 2]  - b[i];
		}
		while(1)
		{
			i = dis = 0;
			while(1)
			{
				dis += step;
				if(dis > a[i])
				{
					if(dis < b[i] || dis > a[i + 1])//²Èµ½ÏÝÚå 
					{
						flag = 0;
						break;
					}
					else
					{
						if(dis >= b[i])//¿ç¹ýÏÝÚå
						{
							i++;
							if(i == n)
							{	
								flag = 1;
								break;
							}
						}
						
					}
						
				}
			}
			if(flag == 1)
			{
				printf("YES\n");
				break;
			}
			else
			{
				step += 0.01; 
				if(step >= max)
				{
					printf("NO\n");
					break;
				}		
			}
			
		}
	}
	return 0;
}

