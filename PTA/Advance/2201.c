#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;
typedef struct Node *PtrToNode;
struct Node
{
    ElementType Data;
    PtrToNode   Next;
};
typedef PtrToNode List;

List Merge( List L1, List L2 );

int main()
{
    List L1, L2, L;
    L = Merge(L1, L2);
    return 0;
}

List Merge( List L1, List L2 )
{
    List L;
    L=malloc(sizeof(List));
    if(L==NULL)return NULL;
    List p1,pp1;
    List p2,pp2;
    pp1=L1;
    pp2=L2;
    p1=L1->Next;
    p2=L2->Next;
    L=L1;
    while(p2!=NULL)
    {
        while(p1!=NULL)
        {
            if(p2->Data<=p1->Data){
                p2->Next=p1;
                pp1->Next=p2;
                break;
            }
            pp1=pp1->Next;
            p1=p1->Next;
        }
        pp2=pp2->Next;
        p2=p2->Next;
        p1=L1->Next;
        pp1=L1;
    }
    L1->Next=NULL;
    L2->Next=NULL;
    return L;
}
