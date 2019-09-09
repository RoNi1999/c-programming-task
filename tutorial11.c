#include<stdio.h>
int main()
{
    int age;
    printf("Enter Your Age : ");
    scanf("%d",&age);

    switch (age)
    {
    case 3:
        printf("The Age is 3 ");
        break;
    case 13:    
        printf("The Age is 13 ");
        break;
    case 23:
        printf("The Age is 23 ");
        break;     
    default:
        printf("The Age is not 3,13,23 ");
        break;
    }
    return 0;
}
//Roni Singh 1999
