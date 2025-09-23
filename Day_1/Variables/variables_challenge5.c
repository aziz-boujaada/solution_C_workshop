#include<stdio.h>

int main(){

float x ;
float result = 1 ;


printf("Entrer la valeur de X :");
scanf("%f"  ,&x);

//3x5+2x4–5x3–x2+7x–6
result = (3*x*x*x*x*x) + (2*x*x*x*x) -( 5*x*x*x ) - x*x + 7*x - 6;
printf("result est : %.2f " ,  result);
    return 0 ;
}