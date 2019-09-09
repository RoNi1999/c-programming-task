#include<stdio.h>
//steps
//1.function prototype
addition();
int subtraction();
multiplication(int a, int b);
int division(int a,int b);
//2.main function
main()
{
 //function call
 
	  int diff=0,div=0;
	  addition();
	  int a=0,b=0;
	  diff=subtraction();
	  printf("The subtraction is : %d",diff);
	  printf("\nEnter Two Numbers : ");
	  scanf("%d%d",&a,&b);
	  multiplication(a,b);
	  div=division(a,b);
	  printf("\nThe Quotient is : %d",div);
	 
}
//function definition

/*Return type and Argument
1.A function With no return type and no argument
2.A function With return type and without argument
3.A function with no return type but with argument
4. A function with return type and with argument
*/

//3.Addition
addition() //1
{
	int a=0,b=0,c;
    printf("\nEnter Two Numbers : ");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("The sum is : %d",c);
}
//4.subtraction
int subtraction() //2
{
	int a=0,b=0,c;
    printf("\nEnter Two Numbers : ");
    scanf("%d%d",&a,&b);
    c=a-b;
    //printf("The sum is : %d",c);
    return c;
}
//5.multiplication
multiplication(int a, int b)  //3
{
	 printf("The product is : %d",a*b);
}
//6.division
int division(int a,int b) //4
{
	return(a/b);
}
