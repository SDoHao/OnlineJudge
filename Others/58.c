#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    int words = 0;
    int bool_int = 1;
    while((ch = getchar()) != EOF)
    {
        if(isalpha(ch))
        {
            if(bool_int)
            {
                words++;
                bool_int = 0;
            }
        }
        else
        	bool_int = 1;
    }
    printf("%d",words); 
    return 0;
}
