#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct stud
{
    int ID;
    char Name[40];
    long long int Mob_No;
    int Total;
    int Per;
    char Cource_Name[20];
};

int main()
{
    char ch = '\0';
    int Choice = 0, BBA_intake = 0, BCA_intake = 0, BCS_intake = 0;

    struct stud *BBA, *BCA, *BCS;

    printf("\n Enter Intake Capacity for BBA Cource :");
    scanf("%d",&BBA_intake);

    printf("\n Enter Intake Capacity for BCA Cource :");
    scanf("%d",&BCA_intake);

    printf("\n Enter Intake Capacity for BCS Cource :");
    scanf("%d",&BCS_intake);

    printf("\n BBA Department Students Memory Allocated For %d Students!!!",BBA_intake);

    printf("\n BCA Department Students Memory Allocated For %d Students!!!",BCA_intake);

    printf("\n BCS Department Students Memory Allocated For %d Students!!!",BCS_intake);

    getch();
    system("cls");

    for(;;)
    {
        printf("\n\n***** Welcome To Admission System Of Computer Department *****\n\n");

        printf("\n 1.Add New Student");
        printf("\n 2.Display Admissions Of Student Department Wise");
        printf("\n 3.Display Single Student Details With ID");
        printf("\n 4.Display Topper of Perticular Department");
        printf("\n 5.EXIT");

        printf("\n\n Enter Your Choice :");
        scanf("%d",&Choice);

        switch(Choice)
        {
            case 1:
                    printf("\n Add_Student Function Will Be Called Here");
                    getch();
                    system("cls");
                    break;

            case 2:
                    printf("\n Display Addmited Function Will Be Called Here");
                    getch();
                    system("cls");
                    break;

            case 3:
                    printf("\n Display Single Student Function Will Be Called Here");
                    getch();
                    system("cls");
                    break;

            case 4:
                    printf("\n Display Topper Student Function Will Be Called Here");
                    getch();
                    system("cls");
                    break;

            case 5:
                    printf("\n\n Are You Sure ??? Do YOU Want To Exit Application ??? (Yes/No)");

                    fflush(stdin);

                    ch = getchar();

                    if(ch == 'Y' || ch == 'y')
                    {
                        goto OUT;
                    }

                    system("cls");
                    fflush(stdin);
                    break;

            default:
                    printf("\n Invalid Choice");
                    getch();
                    system("cls");
                    break;

        }

    }
OUT:
    printf("\n\n Thanks For Using Our Applicatin !!!");

    _getch();
    return 0;
}
