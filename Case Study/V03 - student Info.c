#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct stud
{
    int Roll_No;
    char Name[40];
    int Phy;
    int Chem;
    int Maths;
    float Total;
    float Per;
};


int main()
{

    struct stud std;
    void Accept_Student_Details(struct stud*);
void Display_Student_Details(struct stud*);

    Accept_Student_Details(&std);

    Display_Student_Details(&std);

    printf("\n\n Thanks For Using Our Application !!!");

    getch();
    return 0;
}

void Accept_Student_Details(struct stud *sPtr)
{
    printf("\n Enter student Details =>\n");

    printf("\n Enter Student Roll No : ");
    scanf("%d",&sPtr->Roll_No);

    fflush(stdin);

    printf("\n Enter Student Name :");
    gets(sPtr->Name);

    printf("\n Enter Physics Marks :");
    scanf("%d",&sPtr->Phy);

    printf("\n Enter Chemistry Marks :");
    scanf("%d",&sPtr->Chem);

    printf("\n Enter Mathematics Marks :");
    scanf("%d",&sPtr->Maths);

     sPtr->Total = sPtr->Phy + sPtr->Chem + sPtr->Maths;

    sPtr->Per = (sPtr->Total / 300)*100;

    printf("\n Enter Any Key To Go Ahead =>");
    getch();
    //return;
}
void Display_Student_Details(struct stud *sPtr)
{
    printf("\n=====================================\n");

    printf("\n\n Entered students Details Are =>\n\n");

    printf("\n\t\t Roll Number       = %d",sPtr->Roll_No);
    printf("\n\t\t Student Name      = %s",sPtr->Name);
    printf("\n\t\t Physics Marks     = %d",sPtr->Phy);
    printf("\n\t\t Chemistry Marks   = %d",sPtr->Chem);
    printf("\n\t\t Mathematics Marks = %d",sPtr->Maths);
    printf("\n\t\t Total Marks       = %0.0f",sPtr->Total);
    printf("\n\t\t Percentage        = %0.3f",sPtr->Per);

    printf("\n\n=============********===============\n");

    printf("\n Thanks For Using Our Application !!!\n");

    getch();
    //return;
}

