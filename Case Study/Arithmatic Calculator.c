
///
///Arithmatic Calculator - Case Study
///
///Arithmatic calculators use as control based calculator
///
///Input => Two intrgral numbers
///Output => Arithmatic result of user choice i.e. Addition or Substraction or Multiplication or Division or Remainder
///
///Author => Fork Infosystems
///


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include"Helper/Arithmatic_Add.c"
#include"Helper/Arithmatic_Sub.c"
#include"Helper/Arithmatic_Mult.c"
#include"Helper/Arithmatic_Division.c"
#include"Helper/Arithmatic_Modulo.c"

int main()
{
    int choice = 0;
    char ch = '\0';

    for(;;)
    {
        printf("\n***** Fork Infosystems *****\n\t Arithmatic Calculator \n");
        printf("\n==========================================================\n");
        printf("\n Choices =>\n\t 1.Addition \n\t2.Substraction \n\t3.Multiplication \n\t4.Division \n\t5.Remainder \n\t6.Exit");
        printf("\n==========================================================\n");

        printf("\n Enter Your Choice =");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                    Add();
                    getch();
                    system("cls");
                    break;

            case 2:
                    Subtract();
                    getch();
                    system("cls");
                    break;
            case 3:
                    Multiply();
                    getch();
                    system("cls");
                    break;

             case 4:
                    Division();
                    getch();
                    system("cls");
                    break;

             case 5:
                    Modulo();
                    getch();
                    system("cls");
                    break;

            case 6:
                    fflush(stdin);
                    printf("\n Are You Sure Do Want To Exit??? (Yes / No) =");
                    ch = getchar();

                    if(ch == 'y' || ch == 'Y')
                    {
                        goto DWN;
                    }
                    fflush(stdin);
                    system("cls");
                    break;

                default:
                    printf("\n Invalid Choice");
                    getch();
                    system("cls");
                    break;
            }

        }
    DWN:
        printf("\n\n *****Thanks for using FORK INFOSYSTEMS calculator service *****\n");
        printf("\n Press Any Key To Exit Application !!!\n");

        getch();
        return 0;
}
