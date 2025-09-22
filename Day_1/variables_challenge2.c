#include <stdio.h>

int main()
{

    float kelvin = 0;
    float Celsius;

    printf("enter the temperature in Celsius :");
    scanf("%f" , &Celsius);

    kelvin = Celsius + 273.15;

    printf("temperature in kelvin : %.2f" , kelvin);

    return 0;
}