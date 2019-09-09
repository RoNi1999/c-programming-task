typedef struct
{
    int rollno;
    char name[20];
    int age;
}STUDENT;
void main(void)
{
    STUDENT s1;
    s1.rollno=34;
    strcpy(s1.name,"RONI SINGH");
    s1.age=20;

}
