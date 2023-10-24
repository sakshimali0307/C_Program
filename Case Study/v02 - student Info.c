#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct stud
{
    int Roll_No;
    char Name[80];
    int Phy;
    int Chem;
    int Maths;
    float Total;
    float Per;
};
int main()
{
    struct stud std;

    printf("\n Enter Student Details =>");

    printf("\n Enter Student Roll No :");
    scanf("%d",&std.Roll_No);

    fflush(stdin);

    printf("\n Enter Student Name :");
    gets(std.Name);

    printf("\n Enter Physics Marks :");
    scanf("%d",&std.Phy);

    printf("\n Enter Chemistry Marks :");
    scanf("%d",&std.Chem);

    printf("\n Enter Maths Marks :");
    scanf("%d",&std.Maths);

    std.Total = std.Phy + std.Chem + std.Maths;

    std.Per = (std.Total / 300)*100;

    printf("\n Enter Any Key To Go Ahead =>");
    getch();

    printf("\n=====================================\n");

    printf("\n\n Entered students Details Are =>\n\n");

    printf("\n\t\t Roll Number       = %d",std.Roll_No);
    printf("\n\t\t Student Name      = %s",std.Name);
    printf("\n\t\t Physics Marks     = %d",std.Phy);
    printf("\n\t\t Chemistry Marks   = %d",std.Chem);
    printf("\n\t\t Mathematics Marks = %d",std.Maths);
    printf("\n\t\t Total Marks       = %0.0f",std.Total);
    printf("\n\t\t Percentage        = %0.3f",std.Per);

    printf("\n\n=============********===============\n");

    printf("\n Thanks For Using Our Application !!!\n");

    getch();
    return 0;
}
