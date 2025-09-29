#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include "variables.h"






int choice_status;
int Search_Id;
char Search_model[25];
int count_ID = 1;
void Ajouter_Avion()
{

    int ajout;

    printf(YELLOW "========== > AJOUTER UN AVION =========\n" RESET);

    printf(CYAN "enter nombre  des avion pour : " RESET);
    scanf("%d", &ajout);
    printf(YELLOW "____________________________________________\n" RESET);

    for (int i = nbr_total_avion; i < nbr_total_avion + ajout; i++)
    {

        Avion[i].Id = count_ID;

        printf(CYAN "entrer la model de avion  :" RESET);
        scanf(" %[^\n]", Avion[i].Avion_Model);

        printf(CYAN "entrer la capacite de avion  :" RESET);
        scanf("%d", &Avion[i].capacite);

        printf(CYAN " la status de avion  :\n" RESET);

        printf(BLUE "1- Disponible\n" RESET);
        printf(BLUE "2- En maintenance\n" RESET);
        printf(BLUE "3- En vol\n" RESET);
        printf(BLUE "0- return a menu  principal\n" RESET);

        printf(CYAN "enter votre statu:\n" RESET);
        scanf("%d", &choice_status);

        switch (choice_status)
        {
        case 1:
            strcpy(Avion[i].status, "Disponible");
            break;
        case 2:
            strcpy(Avion[i].status, "DEn maintenancee");
            break;
        case 3:
            strcpy(Avion[i].status, "En vol");
            break;
        case 0:
            break;
        default:
            printf(RED "choix invalid !!" RESET);
        }

        printf(CYAN "entrer la date de entrer  d un avion  :" RESET);
        scanf(" %[^\n]", Avion[i].Date_Entre);
        printf(YELLOW "____________________________________________________________\n" RESET);
        printf(GREEN "Avion avec ID %d et la model %s Ajouter avec success \n" RESET, Avion[i].Id, Avion[i].Avion_Model);

        printf(YELLOW "____________________________________________________________\n" RESET);
        count_ID++;
    }

    nbr_total_avion += ajout;
}

void Afficher_Avion()
{

    if (nbr_total_avion == 0)
    {
        printf(RED "Pas des Avion !!!\n" RESET);
    }
    else
    {

        printf(YELLOW "======================= TOUT LES AVION ======================\n" RESET);

        for (int i = 0; i < nbr_total_avion; i++)
        {
            printf(MAGENTA "Avion : %d\n" RESET, i + 1);
            printf(MAGENTA "ID d Avion  :%d \n" RESET, Avion[i].Id);
            printf(MAGENTA "model de avion : %s\n" RESET, Avion[i].Avion_Model);
            printf(MAGENTA "capacitie de avion : %d \n" RESET, Avion[i].capacite);
            printf(MAGENTA "statu d avion : %s\n" RESET, Avion[i].status);
            printf(MAGENTA "date de entrer de avion :  %s\n" RESET, Avion[i]);
            printf(YELLOW "____________________________________________________________\n" RESET);
        }
    }
}

void Modifier_Avion(int Search_Id)
{
    int found = 0;
    int choice_modification;

    for (int i = 0; i < nbr_total_avion; i++)
    {
        if (Search_Id == Avion[i].Id)
        {
            found = 1;
            printf(BLUE "  ____________________________________\n" RESET);
            printf(BLUE " |1-Modifier la model d avion :\n " RESET);
            printf(BLUE " |2-Modifier la capacite d avion :\n" RESET);
            printf(BLUE " |3-Modifier la statu d avion :\n " RESET);
            printf(BLUE " |4-Modifier Tout les fromation :\n " RESET);
            printf(BLUE " |____________________________________\n" RESET);

            printf(CYAN "enter votre choix pour modifier :" RESET);
            scanf("%d", &choice_modification);

            switch (choice_modification)
            {
            case 1:
                printf(CYAN "entrer la model de avion  :" RESET);
                scanf(" %[^\n]", Avion[i].Avion_Model);
                break;

            case 2:
                printf(CYAN "entrer la capacite de avion  :" RESET);
                scanf("%d", &Avion[i].capacite);
                break;

            case 3:
                printf(BLUE " la status de avion  :\n" RESET);

                printf(BLUE "1- Disponible\n" RESET);
                printf(BLUE "2- En maintenance\n" RESET);
                printf(BLUE "3- En vol\n" RESET);
                printf(BLUE "0- return a menu  principal\n" RESET);

                printf(CYAN "enter votre statu:\n" RESET);
                scanf("%d", &choice_status);

                switch (choice_status)
                {
                case 1:
                    strcpy(Avion[i].status, "Disponible");
                    break;
                case 2:
                    strcpy(Avion[i].status, "DEn maintenancee");
                    break;
                case 3:
                    strcpy(Avion[i].status, "En vol");
                    break;
                case 0:
                    break;
                default:
                    printf(RED "choix invalid !!" RESET);
                }
                break;

            case 4:
                printf(CYAN "entrer la model de avion  :" RESET);
                scanf(" %[^\n]", Avion[i].Avion_Model);

                printf(CYAN "entrer la capacite de avion  :" RESET);
                scanf("%d", &Avion[i].capacite);

                printf(BLUE "la status de avion  :\n" RESET);

                printf(BLUE "1- Disponible\n" RESET);
                printf(BLUE "2- En maintenance\n" RESET);
                printf(BLUE "3- En vol\n" RESET);

                printf(CYAN "enter votre statu:\n" RESET);
                scanf("%d", &choice_status);

                switch (choice_status)
                {
                case 1:
                    strcpy(Avion[i].status, "Disponible");
                    break;
                case 2:
                    strcpy(Avion[i].status, "DEn maintenancee");
                    break;
                case 3:
                    strcpy(Avion[i].status, "En vol");
                    break;
                case 0:
                    break;
                default:
                    printf("choix invalid !!");
                }
            }

            Afficher_Avion();
        }
    }
    if (!found)
    {
        printf(RED "Pas d Avion avec cet ID !!!\n" RESET);
    }
}

void Supprimer_Avion(int Search_Id)
{

    int found = 0;
    printf(YELLOW "============================== SUPPRIMER UN AVION ================================\n" RESET);

    for (int i = 0; i < nbr_total_avion; i++)
    {
        if (Search_Id == Avion[i].Id)
            found = 1;
        {
            for (int j = i; j < nbr_total_avion - 1; j++)
            {

                Avion[j] = Avion[j+1];
            }

            printf(GREEN "Avion suppremr avec successe\n" RESET);
            break;
        }
    }
    if (!found)
    {
        printf(RED "Pas d Avion avec cet ID !!!\n" RESET);
    }
    nbr_total_avion--;
}

int Rechercher_ID(int Search_Id)
{
    int found = 0;
    printf(YELLOW "===================== RECHERCHER PAR ID ==================\n" RESET);

    if (nbr_total_avion == 0)
    {
        printf(RED "Pas d avoins dans l airport !!!\n" RESET);
        return 0;
    }
    for (int i = 0; i < nbr_total_avion; i++)
    {
        if (Search_Id == Avion[i].Id)
        {
            found = 1;
            printf(MAGENTA "Avion : %d\n" RESET, i + 1);
            printf(MAGENTA "ID d Avion  :%d \n" RESET, Avion[i].Id);
            printf(MAGENTA "model de avion : %s\n" RESET, Avion[i].Avion_Model);
            printf(MAGENTA "capacitie de avion : %d \n" RESET, Avion[i].capacite);
            printf(MAGENTA "statu d avion : %s\n" RESET, Avion[i].status);
            printf(MAGENTA "date de entrer de avion :  %s\n" RESET, Avion[i]);
            printf("____________________________________________________________\n");
        }
    }
    if (!found)
    {
        printf(RED "Pas d Avion avec cet ID !!!\n" RESET);
    }
}

int Rechercher_Par_Model(char Search_model[25])
{

    int found = 0;

    if (nbr_total_avion == 0)
    {
        printf(RED "Pas d avoins dans l airport !!!\n" RESET);
        return 0;
    }

    for (int i = 0; i < nbr_total_avion; i++)
    {
        if (strcmp(Search_model, Avion[i].Avion_Model) == 0)
        {
            found = 1;
            printf(MAGENTA "Avion : %d\n" RESET, i + 1);
            printf(MAGENTA "ID d Avion  :%d \n" RESET, Avion[i].Id);
            printf(MAGENTA "model de avion : %s\n" RESET, Avion[i].Avion_Model);
            printf(MAGENTA "capacitie de avion : %d \n" RESET, Avion[i].capacite);
            printf(MAGENTA "statu d avion : %s\n" RESET, Avion[i].status);
            printf(MAGENTA "date de entrer de avion :  %s\n" RESET, Avion[i]);
            printf(YELLOW "____________________________________________________________\n" RESET);
        }
    }
    if (!found)
    {
        printf(RED "Pas d Avion avec cet Model !!!\n" RESET);
    }
}

void Tri_Capacite()
{
  if(nbr_total_avion == 0){
    printf(RED"pas d avion" RESET);
  }
    for (int i = 0; i < nbr_total_avion ; i++)
    {
        for (int j = 0; j < nbr_total_avion - i ; j++)
        {

            if (Avion[j].capacite > Avion[j + 1].capacite)
            {
                int temp = Avion[j].capacite;
                Avion[j].capacite = Avion[j + 1].capacite;
                Avion[j + 1].capacite = temp;
            }
        }
    }
   
}
void Trier_Model()
{

    for (int i = 0; i < nbr_total_avion - 1; i++)
    {
        for (int j = 0; j < nbr_total_avion - i - 1; j++)
        {

            if (strcasecmp(Avion[j].Avion_Model, Avion[j + 1].Avion_Model ) > 0)
            {
                Avions_struct temp = Avion[j];
                Avion[j] = Avion[j + 1];
                Avion[j + 1] = temp;
            }
        }
    }
    Afficher_Avion();
}
