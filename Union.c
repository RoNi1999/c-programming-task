#include<stdio.h>

union bill1{
	
	int rno;
	char date[11]; //dd-mm-yyyy
	char desc[30];
	
};

main()
{
	  
    int choice=0;
	union bill1 b1;
	printf("Choose a Option : \n1. Make a Bill \n2. Quit");
	scanf("%d",&choice);
	if(choice==1)
	{
		printf("\nEnter the info : \n Bill No : ");
		scanf("%d",&b1.rno);
		printf("\n2. Date : " );
		scanf("%s",&b1.date);
		printf("\n3. Description : " );
		scanf("%s",&b1.desc);
		//show that the genration bill
		printf("\n The Genrated bill is : \n1.Recipt no : %d\n2.Date : %s\n3.Desc : %s",b1.rno,b1.date,b1.desc);
	}
	else if(choice==2)
	{
		exit(0);
	}
	else
	{
		printf("Invalid Choice");
	}
}
