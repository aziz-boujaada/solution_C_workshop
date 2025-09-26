#include<stdio.h>
#include "hearder.h"
 
int main(){


    
    
    int choice ;
    
    do{
        printf(" ============ GESTION D UN PARC D AVION ============\n");
        printf("---------> MENU <----------\n");
        printf("1- Ajouter un avion (ou plusieurs).\n");
        printf("2- Modifier un avion (modele, capacité, statut).\n");
        printf("3- Supprimer un avion..\n");
        printf("4- Afficher la liste des avions\n");
        printf("5- Rechercher un avion (par id ou par modèle)\n");
        printf("6- Exit \n");
        
        printf("______________________________\n");
        
        printf("Enter Your choice :");
        scanf("%d" , &choice);
       
       
       switch(choice){
           
           case 1 :
           Ajouter_Avion() ;
           break;

           case 2 :
           system("cls");
           Afficher_Avion() ;
           break;
        }
        
        
    }while(choice !=0 );
    return 0;

}