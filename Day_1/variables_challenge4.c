#include<stdio.h>


int main(){



    float yards =0 ;
    float km  ;

    printf("enter the distance in KM : ");
    scanf("%f" , &km);

    yards = km * 1093.61;

    printf("the distance in yards is : %.2f" , yards);


    return 0 ; 
}