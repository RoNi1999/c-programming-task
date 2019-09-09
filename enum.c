#include<stdio.h>
enum day{
	monday,tuesday,wenesday,thurusday,friday,saturday,sunday
};

main()
{
	enum day today ;
	printf("What day is today (numbers)? : ");
	scanf("%d",&today);
	if(today==monday)
	{
		printf("Today is Monday");
	}
}
