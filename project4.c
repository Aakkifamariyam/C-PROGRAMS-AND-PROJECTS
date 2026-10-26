#include<stdio.h>
#include<conio.h>
struct student
{
    char name[20];
    int roll;
    float mark;
    char city[20];
    char dream[40];
};
void read(struct student s[10])
{
    int i;
    for(i=0;i<10;i++)
    {
        printf("Enter Name:");
        scanf("%s",s[i].name);
        printf("Enter roll:");
        scanf("%d",&s[i].roll);
        printf("Enter Mark:");
        scanf("%f",&s[i].mark);
        printf("Enter City:");
        scanf("%s",s[i].city);
        printf("Enter your dream:");
        scanf("%s",s[i].dream);
        printf("\n");
    }   

}
void display(struct student s[10])
{
    int i;
    printf("\n--------Student Register--------\n");
    for(i=0;i<10;i++)
    {
        printf("Name:%s\n",s[i].name);
        printf("Roll:%d\n",s[i].roll);
        printf("Mark:%f\n",s[i].mark);
        printf("City:%s\n",s[i].city);
        printf("Dream:%s\n",s[i].dream);
        printf("\n");
    }
}
int main()
{
        int i;
        struct student s[10];
        read(s);
        display(s);
        return 0;
}