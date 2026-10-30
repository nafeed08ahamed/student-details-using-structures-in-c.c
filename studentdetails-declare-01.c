#include<stdio.h>
#include<conio.h>
struct Students{
    int id;
    char name[20];
    int age;
    char sec;
};
void main()
{
    struct Students S1={10,"ash",18,'A'};
    struct Students S2={20,"mars",17,'A'};
    struct Students S3={15,"venus",18,'A'};
clrscr();
    printf("%d\n %s %d\n %c",S1.id,S1.name,S1.age,S1.sec);
    printf("%d\n %s %d\n %c",S2.id,S2.name,S2.age,S2.sec);
    printf("%d\n %s %d\n %c",S3.id,S3.name,S3.age,S3.sec);
 getch();   
}