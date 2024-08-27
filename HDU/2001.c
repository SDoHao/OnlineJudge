#include<stdio.h>
#include<math.h>
int main()
{
    float x1,x2,y1,y2,dis;
    while(scanf("%f %f %f %f%*c",&x1,&y1,&x2,&y2)!=EOF)
    {
        dis=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
        printf("%.2f\n",dis);
    }
    return 0;
}

