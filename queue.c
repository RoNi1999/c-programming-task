#include<stdio.h>
#include<conio.h>
#define SIZE 5

int front = -1;
int rear = -1;
int q[SIZE];

void insert();
void del();
void display();

int main()
{
	int choice;
	do
	{
		printf("\n Menu : ");
		printf("\n 1. Insert ");
		printf("\n 2. Delete ");
		printf("\n 3. Display ");
		printf("\n 4. Exit ");
		
		printf("\n Enter your Choice : ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				insert();
				printf("Inserted Successfully ");
				break;
			case 2:
			     del();
			     printf("Deleted Successfully ");
				 break;
			case 3:
			      display();
			      break;
			case 4:
				printf("End of the Programe. Press any key to exit ");
				getch();
				exit(0);
		}
	}while(choice!=4);
	
}

void insert()
{
	int no;
	printf("\nEnter the Number to be added : ");
	scanf("%d",&no);
	
	if(rear<SIZE-1)//QUEUE IS EMPTY 
	{
		q[++rear]=no;
		if(front==-1)
		front=0;//front=front+1;
	}
	else
	{
		printf("\nQueue Overflow");
	}
}

void del()
{
	if (front==-1)
	{
		printf("\nQueue Underflow");
		return;
	}
	else
	{
			printf("\nDeleted Item : -->>%d\n",q[front]);
	}
	if(front==rear)
	{
		front=-1;
		rear=-1;
		
	}
	else
	{
		front=front+1;
	}
}

void display()
{
	int i;
	if(front==-1)
	{
		printf("\nQueue is Empty");
		return;
		
	}
	for(i=front;i<=rear;i++)
	printf("\t%d",q[i]);
}
