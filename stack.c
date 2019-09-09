#include<stdio.h>
#include<conio.h>
#define MAXSIZE 5

struct stack // structure defination for stack 
{
	int stk[MAXSIZE];
	int top;
};

typedef struct stack STACK;
STACK s;

// function declaration/prototype
 void push(void);
 int pop(void);
 void display(void);
 
 void main()
 {
 	int choice;
 	int option = 1;
 	
 	s.top = -1;
 	
 	printf("STACK OPERATION\n");
 	while(option)
 	{
 		printf("------------------------------------------------------------\n");
 		printf("1 --> PUSH \n");
 		printf("2 --> POP \n");
 		printf("3 --> DISPLAY \n");
 		printf("4 --> EXIT \n");
 		printf("------------------------------------------------------------\n");
 		
 		printf("Enter the choice \n");
 		scanf("%d",&choice);
 		
 		switch(choice)
 		{
 			case 1 : push();
 			break;
 			case 2 : pop();
 			break;
 			case 3 : display();
 			break;
 			case 4 : return;
		}
		
		fflush(stdin);
		printf("Do youwant to continue (Type 1 for yes or 0 for no )?\n");
		scanf("%d",&option);
	}
 }
 
 //function to add an element to the stack
 void push()
 {
 	int num;
 	if(s.top == (MAXSIZE -1))
 	{
 		printf("Stack is full");
 		return;
	}
	else
	{
		printf("Enter the Element to be pushed\n");
		scanf("%d",&num);
		s.top = s.top + 1;
		s.stk[s.top] = num;
		
	}
	return;
 }
 
 //function to delete on element from stack 
 
 int pop()
 {
 	int num;
 	if(s.top == -1)
 	{
 		printf("stack is empty\n");
 		return (s.top);
	 }
	 else
	 {
	 	num = s.stk[s.top];
	 	printf("popled element is = %d\n",s.stk[s.top]);
	 	s.top = s.top -1;
	 	
	 }
	 return(num);
 }
 
 //function to display the status of the stack
 void display()
 {
 	int i;
 	if(s.top == -1)
 	{
 		printf("\nStack is Empty \n");
 		return;
	}
	else
	{
		printf("\n The status of the stack is\n");
		for(i= s.top;i>=0;i--)
		{
			printf("%d\n",s.stk[i]);
		}
	}
	printf("\n");
 }
