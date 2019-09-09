enum boolean
{
    false,true
};
int isEven(int x)
{
    if(x%2==0)
        return(true);
    else
        return(false);
}
void main(void)
{
    int n;
    enum boolean result;
    printf("Enter a Number : ");
    scanf("%d",&n);
    result=isEven(n);
    if(result==true)
        printf("Even Number");
    else
        printf("Odd Number");
}
