#include<stdio.h>
main()
{
	//1. Declare the variables for storing the Numbers
	const float pi = 3.14;
	int num1=0,num2=0;
	int sum=0,dif=0,rem=0;
	float mul=0,div=0;
	
	
	//2.Read the values
	printf("Enter the First Number : ");
	scanf("%d",&num1);
	printf("Enter the Second Number : ");
	scanf("%d",&num2);
	
	
	//3.Calculation
	sum=num1+num2+pi;
	dif=num1-num2+pi;
	mul=num1*num2;
	div=num1/num2;
	rem=num1%num2;
	
	
	//4.Display them back to the user
	printf("The result are : \nAddition = %d, \nSubtraction=%d,\nMultiplication=%f,\nDivision= %f,\nRemender=%d",sum,dif,mul,div,rem);
}
