#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct stud
{
    int Roll_No;
    char Name[80];
    int phy;
    int chem;
    int maths;
    float Total;
    float Per;
};
int main()
{
    struct stud std;

    std.Roll_No=15;
    strcpy(std.Name,"Raj Patil");
    std.phy=82;
    std.chem=75;
    std.maths=55;

    std.Total=std.phy + std.chem + std.maths;

    std.Per = (std.Total / 300)*100;

    printf("\n Roll Number = %d",std.Roll_No);
    printf("\n Name = %s",std.Name);
    printf("\n Total Marks = %0.0f",std.Total);
    printf("\n Percentage = %0.3f",std.Per);

    printf("\n Thanks for Using Our Application !!!");

    getch();
    return 0;
}
