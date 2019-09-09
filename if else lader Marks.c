#include<stdio.h>
#include<conio.h>
void main()
{
    int marks;
    printf("enter a number : ");
    scanf("%d",&marks);

    if(marks>90)
        printf("Grade - A");
    else
    {
        if(marks>80)
            printf("Grade - B");
        else
        {
            if(marks>70)
                printf("Grade - c");
            else
            {
                if(marks>50)
                    printf("Grade - D");

                else
                {
                    if(marks<33)
                        printf("You are Fail");
                }
            }
        }
    }
    getch();
}
