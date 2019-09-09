#define PI 3.14
int main()
{
    int r;
    float a;
    printf("Enter Radius of Circle : ");
    scanf("%d",&r);
    a=PI*r*r;
    printf("Area of Circle is %f",a);
    getch();
}
