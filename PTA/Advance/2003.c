#include<stdio.h>
Position BinarySearch(List L, ElementType X)
{
    int i,j,m;
    j=L->Last;
    i=1;
    m=(i+j)/2;
    while(i<=j)
    {

        if(L->Data[m]>X)
        {
            j=m-1;
        }
        else if(L->Data[m]<X)
        {
            i=m+1;
        }
        else
        {
           return m;
        }
        m=(i+j)/2;
    }
    return NotFound;
}
