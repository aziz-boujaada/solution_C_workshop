#include<stdio.h>
#include<stdlib.h>
#include "hearder.h"
 
int main(){


    
    
    int menu_choice ;
    int choice_recherch;
    do{
      
        printf(" ============ GESTION D UN PARC D AVION ============\n");
        printf("            ---------> MENU <----------            \n");
        printf("1- Ajouter un avion (ou plusieurs).\n");
        printf("2- Modifier un avion (modele, capacite, statut).\n");
        printf("3- Supprimer un avion..\n");
        printf("4- Afficher la liste des avions\n");
        printf("5- Rechercher un avion (par id ou par modele)\n");
        printf("6- Exit \n");
        
        printf("______________________________\n");
        
        printf("Enter Your choice :");
        scanf("%d" , &menu_choice);
       
       
       switch(menu_choice){
           
           case 1 :
           Ajouter_Avion() ;
           break;

           case 2 :  
           Modifier_Avion() ;
           break;

           case 3 :
           Supprimer_Avion() ;
           break;

           case 4 :
           Afficher_Avion() ;
           break;

           case 5 :

           printf("1- rechercher par ID\n");
           printf("2- rechercher par Model\n");
           printf("3- return a la menu principal\n");
          
           printf("entre votre choix pour rechercher :");
           scanf("%d" , &choice_recherch);

           switch(choice_recherch){
            case 1 : 
            Rechercher_ID();
            break;

            case 2 :
            Rechercher_Par_Model();
            break;

            case 3 : break;

            default : printf("choix invalid");
           }
           break;

           case 6 :break;

           default : printf("choix invalid !!!!!\n");
        }
        
        
        
    }while(menu_choice != 6);



    return 0;
}