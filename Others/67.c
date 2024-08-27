#include<stdio.h>
#include<math.h>
int main()
{
	int line[8];
	int i = 0;
	float k1,k2;
    while(scanf("%d",&line[i++]) != EOF)
	{
		if(i >= 8)
		{
			if(line[0] == line[2] || line[4] == line[6])
				if(line[4] == line[6] && line[0] == line[2])
					if(line[0] == line[4])
						printf("Yes\n");
					else
						printf("No\n");
				else
					printf("Yes\n");
			else
			{
				k1 = (line[3] - line[1]) * 1.0 / (line[2] - line[0]);
				k2 = (line[7] - line[5]) * 1.0 / (line[6] - line[4]);
				if(fabs(k1 - k2) < 1e-3)
					if(fabs((line[1] - k1 * line[0]) - (line[5] - k2 * line[4])) < 1e-3)
						printf("Yes\n");
					else
						printf("No\n");
				else
					printf("Yes\n");
			}
			i = 0;
		}
	}
	return 0;
}
