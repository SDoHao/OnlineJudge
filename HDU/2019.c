#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num,data;
    scanf("%d %d",&num,&data);
    while(num!=0&&data!=0)
    {
        int array[100],k=0,D=0;
        //array=(int*)malloc(sizeof(int)*num);
        for(int i=0;i<num;i++)
        {
            scanf("%d",&array[i]);
        }
        for(k=0;k<num;k++)
        {
            if(array[k]>=data)
                break;
            //else if(array[k]==data)
                //D=1;
        }
        if(D==0)
        {
            for(int i=num;i>k;i--)
            {
                array[i]=array[i-1];
            }
            array[k]=data;
            for(int i=0;i<num;i++)
            {
              printf("%d ",array[i]);
            }
            printf("%d\n",array[num]);
        }
//        else
//        {
//            for(int i=0;i<num-1;i++)
//            {
//              printf("%d ",array[i]);
//            }
//            printf("%d\n",array[num-1]);
//        }
        scanf("%d %d",&num,&data);
    }
    return 0;
}

//struct list
//{
//  int data;
//  struct list *next;
//};
//typedef struct list * List;
//
//List list_init()
//{
//    List L = (List)malloc(sizeof(List));
//    L->next=NULL;
//    return L;
//}
//
//void list_insert(List L,int x,int j)//插入到第j个位置之后
//{
//    List P = (List)malloc(sizeof(List));
//    List tmp=L;
//    P->data=x;
//    for(int i = 0;i<j;i++)
//    {
//       tmp=tmp->next;
//    }
//    P->next=tmp->next;
//    tmp->next=P;
//}
//
//int list_find(List L,int x)//找到比x大的位置并返回前一个位置
//{
//
//    int pos=0;
//    List List_next=L->next;
//    while(1)
//    {
//        if(List_next->data>=x)
//            return pos;
//        else
//        {
//            List_next=List_next->next;
//            pos++;
//        }
//    }
//}
