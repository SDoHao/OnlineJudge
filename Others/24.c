#include<stdio.h>
#include<math.h>
int main()
{
	float l1,l2,l3;
	float p;
	while(scanf("%f %f %f",&l1,&l2,&l3) != EOF)
	{
		p = (l1 + l2 + l3) / 2;
		printf("%.2f\n",sqrt(p * (p - l1) * (p - l2) * (p - l3)));
	}
	return 0;
}
