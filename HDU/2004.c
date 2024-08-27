#include<stdio.h>
int main()
{
    int Score;
    while(scanf("%d",&Score)!=EOF)
    {
        switch (Score/10)
        {
            case 10:;
            case 9:printf("A\n");break;
            case 8:printf("B\n");break;
            case 7:printf("C\n");break;
            case 6:printf("D\n");break;
            default:
                {
                    if(Score>100||Score<0)printf("Score is error!\n");
                    if(Score<60&&Score>=0)printf("E\n");
                }
                break;
        }
    }
    return 0;
}
