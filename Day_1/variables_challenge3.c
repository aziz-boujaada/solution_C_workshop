#include<stdio.h>

int main(){

float m_s = 0;
    float km_h;

    printf("enter the speed in km/h :");
    scanf("%f" , &km_h);

    m_s = km_h * 0.27778;
    printf("the speed in m/s : %f" , m_s);

    return 0 ;
}