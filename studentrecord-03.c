  #include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Students{
    int roll;
    char name[20];
    float mark;
};
int main()
{
    struct Students S1;
    S1.roll=101;
    strcpy(S1.name,"Ash");
    S1.mark=84.41;
        printf("%d %s %.2f",S1.roll,S1.name,S1.mark);
    return 0;

}