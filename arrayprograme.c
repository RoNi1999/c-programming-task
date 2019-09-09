#include<Stdio.h>
main()
{ 
    //1.Decleration the array
	int marks[5];
	int i=0;
	float avg=0.0;
	int sum=0;
	char grade='F';
	
	
	//2.Take input from users 
	printf("Enter the marks in 5 Subject : ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&marks[i]);
		
	}
	
	
	//3.calculate the average
	for(i=0;i<5;i++)
	{
		sum = sum+marks[i];
		avg = sum/5;
	}
	printf("\n The sum is : %d",sum);
	printf("\n The average is : %f",avg);
	
	
	//4.calcute the grade
	if(avg>=91)
	{
		grade ='S';
	}
	else if(avg>=81)
	{
		grade = 'A';
	}
	else if(avg>=71)
	{
		grade = 'B';
	}
	else if(avg>=61)
	{
		grade = 'C';
	}
	else
	    grade = 'F';
	 
	//5. display the output 
	
	printf("\n The Grade allocate is : %c",grade); 
}
