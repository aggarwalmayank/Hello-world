#include<stdio.h>
void swap(int *a,int *b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
}
    
int main()
{
    int a,m;
    
    printf(" Enter First Number : ");
    scanf("%d" , &a);
    printf(" Enter Second Number : ");
    scanf("%d" , &m);
    
    swap(&a,&m);
    printf(" After swapping ...\n\n");
    printf(" First Number:%d",a);
    printf("\n Second Number:%d",m);

return 0;
}
