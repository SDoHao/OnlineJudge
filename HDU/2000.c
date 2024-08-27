#include<stdio.h>
int main()
{
    char x,y,z;
    //while(scanf(" %c%c%c",&x,&y,&z)!=EOF)//回车也是字符,所以前面要加个空格
    while(scanf("%c%c%c%*c",&x,&y,&z)!=EOF)
    {
        int temp=x,temp2,i=0;
        if(temp>y) temp=y,i=1;
        if(temp>z) temp=z,i=2;
        if(i==0)
        {
           if(y>z)
           {
               temp2=y;
               y=z;
               z=temp2;
           }
        }
        if(i==1)
        {
           y=x;
           if(y>z)
           {
               temp2=y;
               y=z;
               z=temp2;
           }

        }
        if(i==2)
        {
           z=x;
           if(y>z)
           {
               temp2=y;
               y=z;
               z=temp2;
           }
        }
        x=temp;
        printf("%c %c %c\n",x,y,z);
    }
    return 0;
}
