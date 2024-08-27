#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a,const void *b)
{
    return ( *(int *)a - *(int *)b ) ;
}
int main() 
{ 
    int n,s[100],i; 
    scanf("%d",&n); 

    for(i = 0;i < n;i++) scanf("%d",&s[i]);      

    qsort(s,n,sizeof(s[0]),cmp);      

    for(i = 0;i < n;i++) printf("%d ",s[i]);      

    return(0);  
}
