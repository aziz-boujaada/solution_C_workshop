#include <stdio.h>
int main(){

const float PI = 3.14 ; 
float r;
float volume = 0 ; 

printf("entrer la vlaluer de rayon :");
scanf("%f" , &r);
r = r*r*r;
volume = (4.0f / 3.0f) * PI *r;
printf("the volume is : %.2f" ,volume );

  return 0;
}