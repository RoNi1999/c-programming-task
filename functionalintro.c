#include<stdio.h>
addition(); //function prototype
main()
{
	//core functionality
	//function call
	addition();
	
}

//Function definition
addition()
{
	int a=0,b=0,sum;
	printf("Enter Two Number : ");
	scanf("%d%d",&a,&b);
	sum=a+b;
	printf("\n The Sum is : %d",sum);
	
}
