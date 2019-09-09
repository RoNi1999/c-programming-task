#include<stdio.h>
main()
{
 //1. Read the age from the users
 printf("Enter the Age : ");
 int age=0;
 scanf("%d",&age);
 
 //2.Check the Age
/* if(age<18)	  //<,>,<=,>=,==,!=
 {
 	
 	//what happens if the condition is true
 	printf("you cannot vote");
 	
 }
 else
 {
 	
 	//what happens if the condition is false
 	printf("you can vote");
 	
 }*/
 if(age<18)
 {
 	printf("you cannot vote");
 }
 else if(age>=18 && age<25)    //&&,||,!
 {
 	printf("you are a minor and you can vote");
 }
 else
 {
 	printf("you can vote");
 }
 
}
