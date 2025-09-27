#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "variables.h"

nbr_total_avion = 0;
int choice_status;
int Search_Id;
void Ajouter_Avion()
{

    int ajout;
    int count_Id = nbr_total_avion;
    printf("========== > AJOUTER UN AVION =========\n");

    printf("enter nombre  des avion pour : ");
    scanf("%d", &ajout);

    for (int i = nbr_total_avion; i < nbr_total_avion + ajout; i++)
    {

        Id[i] = ++count_Id;

        printf("entrer la model de avion  :");
        scanf(" %[^\n]", Avion_Model[i]);

        printf("entrer la capacite de avion  :");
        scanf("%d", &capacite[i]);

        printf(" la status de avion  :");

        printf("1- Disponible\n");
        printf("2- En maintenance\n");
        printf("3- En vol\n");
        printf("0- return a menu  principal\n");

        printf("enter votre statu:\n");
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

        printf("entrer la date de entrer  d un avion  :");
        scanf(" %[^\n]", Date_Entre[i]);

        printf("____________________________________________________________\n");
    }

    nbr_total_avion += ajout;
}

void Afficher_Avion()
{

    if (nbr_total_avion == 0)
    {
        printf("Pas des Avion !!!\n");
    }
    else
    {

        printf("======================= TOUT LES AVION ======================\n");

        for (int i = 0; i < nbr_total_avion; i++)
        {
            printf("Avion : %d\n", i + 1);
            printf(" ID d Avion  :%d \n", Id[i]);
            printf("model de avion : %s\n", Avion_Model[i]);
            printf("capacitie de avion : %d \n", capacite[i]);
            printf("statu d avion : %s\n", status[i]);
            printf("date de entrer de avion :  %s\n", Date_Entre[i]);
            printf("____________________________________________________________\n");
        }
    }
}

void Modifier_Avion()
{

    printf("Enter une Id pour rechercher : ");
    scanf("%d", &Search_Id);

    for (int i = 0; i < nbr_total_avion; i++)
    {
        if (Search_Id == Id[i])
        {
            Afficher_Avion();
            printf("entrer la model de avion  :");
            scanf(" %[^\n]", Avion_Model[i]);

            printf("entrer la capacite de avion  :");
            scanf("%d", &capacite[i]);

            printf(" la status de avion  :\n");

            printf("1- Disponible\n");
            printf("2- En maintenance\n");
            printf("3- En vol\n");
            printf("0- return a menu  principal\n");

            printf("enter votre statu:\n");
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
        else
        {
            printf("Pas d Avion avec cet ID !!!\n");
        }
    }
}

void Supprimer_Avion()
{

    int found = 0 ;
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
                capacite[j] = capacite[j];
                strcpy(status[j], status[j + 1]);
                strcpy(Date_Entre[j], Date_Entre[j + 1]);
            }

            printf("Avion suppremr avec successe\n");
            break;
        }
        if(!found)
        {
            printf("Pas d Avion avec cet ID !!!\n");
        }
    }
    nbr_total_avion--;
}



