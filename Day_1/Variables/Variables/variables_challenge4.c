#include<stdio.h>

int main(){



    float montant = 0 , x;
    printf("entrer la montant : ");
    scanf("%f" , &x);
    
    montant = x+x*5.0/100 ;

    printf("la montant est : %.2f" , montant);

    return 0;
}