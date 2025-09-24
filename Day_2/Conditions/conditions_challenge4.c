#include <stdio.h>

int main()
{

    int year_1, month_1, day_1;
    int year_2, month_2, day_2;

    printf("enter la premier date a la format (mm/jj/aa) :");
    scanf("%d\n%d\n%d", &month_1, &day_1, &year_1);

    printf("enter la deuxiem date a la format (mm/jj/aa) :");
    scanf("%d\n%d\n%d", &month_2, &day_2, &year_2);

    if (day_1 > 30 || day_1 > 31 && day_2 > 30 || day_2 > 31)
    {
        printf("enter a day between 1 and 31\n");
    }
    if (month_1 > 12 && month_2 > 12)
    {
        printf("enter a month between 1 and 12\n");
    }

    if (year_1 > year_2)
    {
        printf("%d / %d / %d est plus tot que %d / %d / %d ", month_2, day_2, year_2, month_1, day_1, year_1);
    }
    else if (year_1 == year_2) // 1999 1999
    {
        if (month_1 > month_2) // 10 12
        {
            printf("%d / %d / %d est plus tot que %d / %d / %d ", month_2, day_2, year_2, month_1, day_1, year_1);
        }
        else if (month_1 == month_2)
        {

            if (day_1 > day_2)
            {
                printf("%d / %d / %d est plus tot que %d / %d / %d ", month_2, day_2, year_2, month_1, day_1, year_1);
            }
        }
    }

    return 0;
}