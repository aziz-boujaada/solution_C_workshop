#include<stdio.h>

int main(){


    float a , b ; 

    printf("enter the value of a :");
    scanf("%f"  , &a);

    printf("enter the value of b :");
    scanf("%f"  , &b);

    printf("result of a + b is ==> %.2f\n" , a+b);
    printf("result of a - b is ==> %.2f\n" , a-b);
    printf("result of a * b is ==> %.2f\n" , a*b);
    printf("result of a / b is ==> %.2f\n" , a/b);


    return 0;
}