#include<stdio.h>

int main(){




char ISBN[100] ; 
int len = 0;

int counter = 1;


printf("enter votre iSBN :");
scanf("%s"  , ISBN);

int i = 0 ;
while(ISBN[i] != '\0'){
len++ ;
i++ ;
}

for(int i = 0 ; i < len ; i++ ){
 if(ISBN[i] ==  '-'  || ISBN[i] == ' '){
     counter++;

     switch(counter){
         
         case 1 : {
             printf("\nPrefixe GS1 :");
             break;
            }
            case 2 : {
                printf("\nIdentifiant de groupe :");
                break;
            }
            case 3 : {
                printf("\nCode de  l diteur :");
                break;
            }
            case 4 : {
                printf("\nNumero d article :");
                break;
            }
            case 5 : {
                printf("\nChiffre de controle :");
                break;
            }
            
                }
   
   
}else{
    printf("%c" , ISBN[i]);

 }

 
}


    return 0;
}