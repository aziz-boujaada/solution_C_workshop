#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "variables.h"


int choice_status;
int Search_Id;
int count_ID = 1;
void Ajouter_Avion()
{

    int ajout;
   
    printf(YELLOW"========== > AJOUTER UN AVION =========\n"RESET);

    printf(CYAN"enter nombre  des avion pour : "RESET);
    scanf("%d", &ajout);
    printf(YELLOW"____________________________________________\n" RESET);

    for (int i = nbr_total_avion; i < nbr_total_avion + ajout; i++)
    {

        Id[i] = count_ID;

        printf(CYAN"entrer la model de avion  :"RESET);
        scanf(" %[^\n]", Avion_Model[i]);

        printf(CYAN"entrer la capacite de avion  :"RESET);
        scanf("%d", &capacite[i]);

        printf(CYAN" la status de avion  :\n"RESET);

        printf(BLUE"1- Disponible\n"RESET);
        printf(BLUE"2- En maintenance\n"RESET);
        printf(BLUE"3- En vol\n"RESET);
        printf(BLUE"0- return a menu  principal\n"RESET);

        printf(CYAN"enter votre statu:\n"RESET);
        scanf("%d", &choice_status);

        switch (choice_status)
        {
        case 1:
            strcpy(status[i], "Disponible");
            break;
        case 2:
            strcpy(status[i], "DEn maintenancee");
            break;
        case 3:
            strcpy(status[i], "En vol");
            break;
        case 0:
            break;
        default:
            printf(RED"choix invalid !!"RESET);
        }

        printf(CYAN"entrer la date de entrer  d un avion  :"RESET);
        scanf(" %[^\n]", Date_Entre[i]);
         printf(YELLOW"____________________________________________________________\n"RESET);
        printf(GREEN"Avion avec ID %d et la model %s Ajouter avec success \n"RESET , Id[i] , Avion_Model[i]);


        printf(YELLOW"____________________________________________________________\n"RESET);
        ++count_ID;
    }

    nbr_total_avion += ajout;
}

void Afficher_Avion()
{

    if (nbr_total_avion == 0)
    {
        printf(RED"Pas des Avion !!!\n"RESET);
    }
    else
    {

        printf(YELLOW"======================= TOUT LES AVION ======================\n"RESET);

        for (int i = 0; i < nbr_total_avion; i++)
        {
            printf(MAGENTA"Avion : %d\n"RESET, i + 1);
            printf(MAGENTA"ID d Avion  :%d \n"RESET, Id[i]);
            printf(MAGENTA"model de avion : %s\n"RESET, Avion_Model[i]);
            printf(MAGENTA"capacitie de avion : %d \n"RESET, capacite[i]);
            printf(MAGENTA"statu d avion : %s\n"RESET, status[i]);
            printf(MAGENTA"date de entrer de avion :  %s\n"RESET, Date_Entre[i]);
            printf(YELLOW"____________________________________________________________\n"RESET);
        }
    }
}

void Modifier_Avion()
{
    int found = 0;
    int choice_modification;

    printf(CYAN"Enter une Id pour Modifier : "RESET);
    scanf("%d", &Search_Id);

    for (int i = 0; i < nbr_total_avion; i++)
    {
        if (Search_Id == Id[i])
        {
           found = 1;
            printf(BLUE"  ____________________________________\n"RESET);
            printf(BLUE" |1-Modifier la model d avion :\n "RESET);
            printf(BLUE" |2-Modifier la capacite d avion :\n"RESET);
            printf(BLUE" |3-Modifier la statu d avion :\n "RESET);
            printf(BLUE" |4-Modifier Tout les fromation :\n "RESET);
            printf(BLUE" |____________________________________\n"RESET);

            printf(CYAN"enter votre choix pour modifier :"RESET);
            scanf("%d", &choice_modification);

            switch (choice_modification)
            {
            case 1:
                printf(CYAN"entrer la model de avion  :"RESET);
                scanf(" %[^\n]", Avion_Model[i]);
                break;

            case 2:
                printf(CYAN"entrer la capacite de avion  :"RESET);
                scanf("%d", &capacite[i]);
                break;

            case 3:
                printf(BLUE" la status de avion  :\n"RESET);

                printf(BLUE"1- Disponible\n"RESET);
                printf(BLUE"2- En maintenance\n"RESET);
                printf(BLUE"3- En vol\n"RESET);
                printf(BLUE"0- return a menu  principal\n"RESET);

                printf(CYAN"enter votre statu:\n"RESET);
                scanf("%d", &choice_status);

                switch (choice_status)
                {
                case 1:
                    strcpy(status[i], "Disponible");
                    break;
                case 2:
                    strcpy(status[i], "DEn maintenancee");
                    break;
                case 3:
                    strcpy(status[i], "En vol");
                    break;
                case 0:
                    break;
                default:
                    printf(RED"choix invalid !!"RESET);
                }
                break;

            case 4:
                printf(CYAN"entrer la model de avion  :"RESET);
                scanf(" %[^\n]", Avion_Model[i]);

                printf(CYAN"entrer la capacite de avion  :"RESET);
                scanf("%d", &capacite[i]);

                printf(BLUE"la status de avion  :\n"RESET);

                printf(BLUE"1- Disponible\n"RESET);
                printf(BLUE"2- En maintenance\n"RESET);
                printf(BLUE"3- En vol\n"RESET);

                printf(CYAN"enter votre statu:\n"RESET);
                scanf("%d", &choice_status);

                switch (choice_status)
                {
                case 1:
                    strcpy(status[i], "Disponible");
                    break;
                case 2:
                    strcpy(status[i], "DEn maintenancee");
                    break;
                case 3:
                    strcpy(status[i], "En vol");
                    break;
                case 0:
                    break;
                default:
                    printf("choix invalid !!");
                }
            }

            Afficher_Avion();
        }
        if(!found){
          printf(RED"Pas d Avion avec cet ID !!!\n"RESET);
        }
    }
}

void Supprimer_Avion()
{

    int found = 0;
    printf("============================== SUPPRIMER UN AVION ================================\n");

    printf("enter ID pour suppremer un avion : ");
    scanf("%d", &Search_Id);

    for (int i = 0; i < nbr_total_avion; i++)
    {
        if (Search_Id == Id[i])
            found = 1;
        {
            for (int j = i; j < nbr_total_avion - 1; j++)
            {
                
                strcpy(Avion_Model[j], Avion_Model[j + 1]);
                capacite[j] = capacite[j + 1];
                strcpy(status[j], status[j + 1]);
                strcpy(Date_Entre[j], Date_Entre[j + 1]);
            }

            printf("Avion suppremr avec successe\n");
            break;
        }
        if (!found)
        {
            printf("Pas d Avion avec cet ID !!!\n");
        }
    }
    nbr_total_avion--;
}

int Rechercher_ID()
{
    int found = 0;
    printf("===================== RECHERCHER PAR ID ==================\n");
    printf("enter ID par rechercher : ");
    scanf("%d", &Search_Id);

    if (nbr_total_avion == 0)
    {
        printf("Pas d avoins dans l airport !!!\n");
        return 0;
    }
    for (int i = 0; i < nbr_total_avion; i++)
    {
        if (Search_Id == Id[i])
        {
            found = 1;
            printf("Avion : %d\n", i + 1);
            printf(" ID d Avion  :%d \n", Id[i]);
            printf("model de avion : %s\n", Avion_Model[i]);
            printf("capacitie de avion : %d \n", capacite[i]);
            printf("statu d avion : %s\n", status[i]);
            printf("date de entrer de avion :  %s\n", Date_Entre[i]);
            printf("____________________________________________________________\n");
        }

        if (!found)
        {
            printf("Pas d Avion avec cet ID !!!\n");
        }
    }
}

int Rechercher_Par_Model()
{
    int found = 0;

    char Search_model[25];
    printf("Entrer la model de avion pour rechercher :");
    scanf(" %[^\n]", Search_model);

    if (nbr_total_avion == 0)
    {
        printf("Pas d avoins dans l airport !!!\n");
        return 0;
    }

    for (int i = 0; i < nbr_total_avion; i++)
    {
        if (strcmp(Search_model, Avion_Model[i]) == 0)
        {
            found = 1;
            printf("Avion : %d\n", i + 1);
            printf("ID d Avion  :%d \n", Id[i]);
            printf("model de avion : %s\n", Avion_Model[i]);
            printf("capacitie de avion : %d \n", capacite[i]);
            printf("statu d avion : %s\n", status[i]);
            printf("date de entrer de avion :  %s\n", Date_Entre[i]);
            printf("____________________________________________________________\n");
        }

        if (!found)
        {
            printf("Pas d Avion avec cet Model !!!\n");
        }
    }
}
