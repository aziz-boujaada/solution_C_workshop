#include <stdio.h>

int main()
{

    float temperature;

    printf("enter the temperature in celsius :");
    scanf("%f", &temperature);

    if (temperature < 0)
    {
        printf("solid");
    }
    else if (temperature <= 0 || temperature < 100)
    {
        printf("liquid");
    }
    else
    {
        printf("gaz");
    }

    return 0;
}