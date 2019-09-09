#include<stdio.h>
main()
{
	//1.Loop Variable
	//2.Condition
	int i=0;
	int j=0;
	for(i=1;i<=4;i++)
	{
	   for(j=1;j<=i;j++)
	   {
	   	  printf("*\t");
	   }
		printf("\n");
	}
}
