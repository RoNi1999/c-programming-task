#include<stdio.h>
main()
{
	//1.Display the menu
	printf("Pick an item : \n1. Pen \n2. Pencil\n3.Erasser\n4.Book");
	//2. Read the choice
	int choice=0;
	scanf("%d",&choice);
	//3. Display based on their condition
	switch(choice)
	{
		case 1:
				printf("Picked a pen");
				break;
		case 2:
				printf("Picked a pencil");
					break;
		case 3:
				printf("Picked a eraser");
					break;
		case 4:
				printf("Picked a book");
					break;
		default : 	printf("Invalid Choice");		
	}
}
