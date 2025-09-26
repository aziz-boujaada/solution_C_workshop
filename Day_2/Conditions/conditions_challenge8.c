#include<stdio.h>

int main(){


    int n , carre ; 

    printf("enter  a number :");
    scanf("%d" , &n);


    for(int i = 1 ; i*i <= n ; i++){
        carre = i * i ;
        if( carre % 2 == 0 ){
            printf("  %d  " ,  carre );
            printf("|");
        }

    }


    return 0; 
}