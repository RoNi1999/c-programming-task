#include<stdio.h>
int main()
{
    int age ;
    printf("Enter Your Age : ");
    scanf("%d",&age);
    printf("Your Age is %d you Entered\n",age);
    if(age>=18)
    {
        printf("you can vote\n");
    }
    else
    {
        printf("You can,t vote");
    }
    return 0;
}