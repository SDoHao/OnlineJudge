#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	int i, j, k, num[100], flag[100], n;
	scanf("%d", &k);
	for (i = 0; i < k; i++)
	{
		scanf("%d", &num[i]);
		flag[i] = 1;
	}
	for (i = 0; i < k; i++)
	{
		if (flag[i])
			n = num[i];
		else
			continue;
		while (n != 1)
		{
			if ((n & 1) == 0)
			{
				n = n / 2;
			}
			else
			{
				n = (3 * n + 1) / 2;
			}
			for (j = 0; j < k; j++)
			{

				if (num[j] == n)
				{
					flag[j] = 0;
				}
			}
		}
		//printf("\n[");
		//for (j = 0; j <k; j++)
		//{
		//		printf("%d %d ", j,flag[j]);
		//}
		//printf("]\n");

	}
	j = 0;
	for (i = 0; i < k; i++)
		if (flag[i])
			j++;

	for (i = k - 1; i >= 0; i--)
	{
		if (flag[i])
		{
			printf("%d", num[i]);
			j--;
			if (j != 0)
				printf(" ");
		}

	}
	return 0;
}
