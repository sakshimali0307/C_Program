#include<stdio.h>
#include<conio.h>

int main()
{
    int Bill_cnt = 0, i = 0, Bill_sum = 0;
    int *Bill_ptr = NULL;

    printf("\n Enter How Many Bills =");
    scanf("%d",&Bill_cnt);

    Bill_ptr = (int*) malloc (Bill_cnt * sizeof(int));

    if(Bill_ptr == NULL)
    {
        printf("\n Malloc Failed");
        return -1;
    }

    for(i = 0; i < Bill_cnt; i++)
    {
        printf("\n Enter Bill No %d =",i+1);
        scanf("%d",&Bill_ptr[i]);

        Bill_sum = Bill_sum + Bill_ptr[i];
    }

    system("cls");

    printf("\n Given Bills Are =>\n");

    for(i = 0; i < Bill_cnt; i++)
    {
            printf("\n Bill %d = %d.",i+1, Bill_ptr[i]);
    }

    printf("\n Total Of All Given Bills = %d",Bill_sum);

    getch();
    return 0;
}
