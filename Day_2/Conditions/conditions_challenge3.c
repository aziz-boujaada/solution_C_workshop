#include <stdio.h>

int main()
{

    int huer;
    int minute;
    int time_in_minute = 0;


    printf("enter le husre :");
    scanf("%d", &huer);

    printf("enter le husre :");
    scanf("%d", &minute);

    if(huer > 24 || minute > 60){
        printf("enter a valid tamp !!!");
    }

    time_in_minute = huer * 60 + minute;

    if (time_in_minute >= 480 && time_in_minute <= 583)
    {
        printf("L heure de depart la plus proche est , 8h00 a.m. arrivant a 10h16 am");
    }
    else if (time_in_minute >= 583 && time_in_minute <= 679)
    {
        printf("L heure de depart la plus proche est ,9h43 a.m.arrivant a 11h52 a.m.");
    }
    else if (time_in_minute >= 679 && time_in_minute <= 767)
    {
        printf("L heure de depart la plus proche est ,11h19 a.m.arrivant a 1h31 p.m.");
    }
    else if (time_in_minute >= 767 && time_in_minute <= 840)
    {
        printf("L heure de depart la plus proche est ,12h47 p.m.arrivant a 3h00 p.m.");
    }
    else if (time_in_minute >= 840 && time_in_minute <= 945)
    {
        printf("L heure de depart la plus proche est ,2h00 p.m.arrivant a 4h08 p.m.");
    }

    else if (time_in_minute <= 945 && time_in_minute <= 1020)
    {
        printf("L heure de depart la plus proche est ,7h00 p.m.arrivant a 9h20 p.m.");
    }
    else if ( time_in_minute >= 1305)
    {
        printf("L heure de depart la plus proche est ,9h45 p.m.arrivant a 11h58 p.m.");
    }

    return 0;
}