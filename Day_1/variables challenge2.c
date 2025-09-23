#include <stdio.h>
int main(){

const float PI = 3.14 ; 
float r =10.0;
r = r*r*r;
float volume = 0 ; 


volume = (4.0f / 3.0f) * PI *r;
printf("the volume is : %.2f" ,volume );

  return 0;
}