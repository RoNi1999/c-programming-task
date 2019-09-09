#include<stdio.h>
#include<conio.h>
void swap(int *, int *);
void main()
{
    int a,b;
    printf("Enter Two Number : ");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("A=%d B=%d",a,b);
    getch();
}

void swap(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}
