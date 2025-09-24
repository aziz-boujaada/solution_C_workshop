#include <stdio.h>

int main(){

int number ; 
int revers = 0 ;

printf("Entrez un nombre a deux chiffres");
scanf("%d" , &number);

while(number != 0){
    int module = number % 10 ;
    revers = revers * 10 + module;
    number /= 10;
}
printf("reversed : %d" , revers);
return 0 ; 
}