#include<stdio.h>
int main()
{
    int m,n;
    while(scanf("%d",&n)!=EOF)
    {
        int i = 0,pro = 1;
        while(i<n)
        {
            scanf("%d",&m);
            if(m%2==1)
            {
                pro*=m;
            }
            i++;
        }
        printf("%d\n",pro);
    }

    return 0;
}
