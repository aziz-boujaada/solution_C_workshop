#include<stdio.h>
#include<math.h>

int main(){

    float number_1 , number_2 , number_3 , moyen_geomtrique = 0  ;

    printf("enter the value of first number :");
    scanf("%f" , &number_1); 

    printf("enter the value of second number :");
    scanf("%f" , &number_2);

    printf("enter the value of third number :");
    scanf("%f" , &number_3); 


moyen_geomtrique = pow(number_1 * number_2 * number_3 , 1.0/3.0);
printf("the geometrique moyen is %2.f" , moyen_geomtrique);


    return 0; 
}

