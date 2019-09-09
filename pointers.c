#include<stdio.h>
main()
{
	int sample=17;
	int *p=&sample;
	//**p=sample
	printf("The Value is: %d and the Address is : %d",sample,p);
}
