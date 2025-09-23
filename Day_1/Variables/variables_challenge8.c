#include<stdio.h>

int main(){
float montant , teux ,paiment_mensuel ;


printf("enter la montant :");
scanf("%f" , &montant) ; 

printf("enter la teux :");
scanf("%f" , &teux) ; 

printf("enter la paiment mensuel :");
scanf("%f" , &paiment_mensuel) ; 


teux = montant * ((teux /100) /12) ; 
for(int i = 0 ; i < 12 ; i++){
    
    montant = montant + teux - paiment_mensuel ;
    printf("paiment   de mois %d est : %.2f\n" , i+1 ,montant);
}






    return 0;
}