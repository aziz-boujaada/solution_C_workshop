#include<stdio.h>

int main(){


    float number_1  , number_2 , number_3 ,ponderation_1 ,ponderation_2,  ponderation_3 , ponderation_sum = 0 , average = 0 ; 

    printf("enter the value of first number :");
    scanf("%f" , &number_1);

    printf("enter the  ponderation of first number :");
    scanf("%f" , &ponderation_1);

    printf("enter the value of second number :");
    scanf("%f" , &number_2);

    printf("enter the  ponderation of second number :");
    scanf("%f" , &ponderation_2);

    printf("enter the value of third number :");
    scanf("%f" , &number_3);

    printf("enter the  ponderation of third number :");
    scanf("%f" , &ponderation_3);


  ponderation_sum = ponderation_1 + ponderation_2 + ponderation_3 ;
  average = (number_1 * ponderation_1 + number_2 * ponderation_2 + number_3 * ponderation_3) / ponderation_sum ;

  printf("the average is : %.2f" , average);


    return 0 ; 
}