#include<stdio.h>
#include<stdlib.h>
#include "hearder.h"



 
int main(){


    
    
    int menu_choice ;
    int choice_recherch;
    do{
       
        printf(YELLOW"============  GESTION D UN PARC D AVION  ============ \n" RESET);
        printf(YELLOW"            ---------> MENU <----------            \n" RESET);
        printf(BLUE"1- Ajouter un avion (ou plusieurs).\n"RESET);
        printf(BLUE"2- Modifier un avion (modele, capacite, statut).\n"RESET);
        printf(BLUE"3- Supprimer un avion..\n"RESET);
        printf(BLUE"4- Afficher la liste des avions\n"RESET);
        printf(BLUE"5- Rechercher un avion (par id ou par modele)\n"RESET);
        printf(BLUE"6- Exit \n"RESET);
        
        printf(YELLOW"______________________________\n"RESET);
        
        printf(CYAN"Enter Your choice :" RESET);
        scanf("%d" , &menu_choice);
       
       
       switch(menu_choice){
           
           case 1 :
           system("cls");
           Ajouter_Avion() ;
           break;

           case 2 : 
           system("cls"); 
           Modifier_Avion() ;
           break;

           case 3 :
           system("cls");
           Supprimer_Avion() ;
           break;

           case 4 :
           system("cls");
           Afficher_Avion() ;
           break;

           case 5 :
            system("cls");
           printf(BLUE"1- rechercher par ID\n"RESET);
           printf(BLUE"2- rechercher par Model\n"RESET);
           printf(BLUE"3- return a la menu principal\n"RESET);
          
           printf(CYAN"entre votre choix pour rechercher :"RESET);
           scanf("%d" , &choice_recherch);

           switch(choice_recherch){
            case 1 : 
            Rechercher_ID();
            break;

            case 2 :
            Rechercher_Par_Model();
            break;

            case 3 : break;

            default : printf(RED"choix invalid"RESET);
           }
           break;

           case 6 :break;

           default : printf(RED"choix invalid !!!!!\n"RESET
        
        
        );
        }
        
        
        
    }while(menu_choice != 6);



    return 0;
}