#include<stdio.h>
int main()
{
	float Height,Dstance = 0;
	int Bounce;
	scanf("%f %d",&Height,&Bounce);
	for(;Bounce > 0;Bounce--)
	{
		Dstance += Height;
		Height /= 2;
		if (Bounce != 1)
			Dstance += Height;
	}
	printf("%.2f %.2f",Height,Dstance);
	return 0;	
}
