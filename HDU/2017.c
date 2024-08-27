#include<stdio.h>
#include<ctype.h>

int main()
{
    int num;
    scanf("%d",&num);
    char ch=getchar();
    for(int i=0;i<num;i++)
    {
        int counts = 0;
        while((ch=getchar())!='\n')
        {
            if(isdigit(ch))
            {
                counts++;
            }
        }
        printf("%d\n",counts);
    }
    return 0;
}
