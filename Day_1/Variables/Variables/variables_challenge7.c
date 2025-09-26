#include<stdio.h>

int main(){


int montant ;
int Billets_20 = 0 , Billets_10 = 0 , Billets_5 = 0 , Billets_1 = 0;
printf("enter le valuer de montant :");
scanf("%d" , &montant);


Billets_20 = montant /20 ; 
Billets_10 = montant % 20 / 10;
Billets_5 = montant % 10 / 5 ;
Billets_1 = montant % 5 / 1; 


printf("nombre des Billets de 20$ est : %d\n " , Billets_20);
printf("nombre des Billets de 10$ est : %d\n " , Billets_10);
printf("nombre des Billets de 5$ est : %d\n " , Billets_5);
printf("nombre des Billets de 1$ est : %d\n " , Billets_1); 

    return 0;
}