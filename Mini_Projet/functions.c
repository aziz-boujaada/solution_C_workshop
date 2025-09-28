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

        printf("Avion avec ID %d Ajouter avec success\n" , Id[i]);

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

    int choice_modification;

    printf("Enter une Id pour rechercher : ");
    scanf("%d", &Search_Id);

    for (int i = 0; i < nbr_total_avion; i++)
    {
        if (Search_Id == Id[i])
        {

            printf("1-Modifier la model d avion :\n ");
            printf("2-Modifier la capacite d avion :\n ");
            printf("3-Modifier la statu d avion :\n ");
            printf("4-Modifier Tout les fromation :\n ");

            printf("enter votre choix pour modifier :");
            scanf("%d", &choice_modification);

            switch (choice_modification)
            {
            case 1:
                printf("entrer la model de avion  :");
                scanf(" %[^\n]", Avion_Model[i]);
                break;

            case 2:
                printf("entrer la capacite de avion  :");
                scanf("%d", &capacite[i]);
                break;

            case 3:
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
                break;

            case 4:
                printf("entrer la model de avion  :");
                scanf(" %[^\n]", Avion_Model[i]);

                printf("entrer la capacite de avion  :");
                scanf("%d", &capacite[i]);

                printf(" la status de avion  :\n");

                printf("1- Disponible\n");
                printf("2- En maintenance\n");
                printf("3- En vol\n");

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

            Afficher_Avion();
        }
        else
        {
            printf("Pas d Avion avec cet ID !!!\n");
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

void Rechercher_ID()
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

void Rechercher_Par_Model()
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
