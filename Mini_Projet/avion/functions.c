
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#include<stdio.h>

#define MAX 100 


typedef struct {

    int Id ; 
    char Avion_Model[MAX][30];
    int capacite;
    char status[MAX][30];
    char Date_Entre[MAX][30];
}Avions_struct ;

Avions_struct Avion[MAX] ;



int nbr_total_avion = 0;
int choice_status;
int Search_Id;


void Ajouter_Avion()
{

    int ajout;
    int count_Id = nbr_total_avion;
    printf("========== > AJOUTER UN AVION =========\n");

    printf("enter nombre  des avion pour : ");
    scanf("%d", &ajout);
    printf("____________________________________________\n");

    for (int i = nbr_total_avion; i < nbr_total_avion + ajout; i++)
    {

    Avion[i].Id = ++count_Id;

        printf("entrer la model de avion  :");
        scanf(" %[^\n]", Avion[i].Avion_Model);

        printf("entrer la capacite de avion  :");
        scanf("%d", &Avion[i].capacite);

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

        printf("entrer la date de entrer  d un avion  :");
        scanf(" %[^\n]", Avion[i].Date_Entre);
         printf("____________________________________________________________\n");
        printf("Avion avec ID %d et la model %s Ajouter avec success \n" , Avion[i].Id , Avion[i].Avion_Model);

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
            printf(" ID d Avion  :%d \n", Avion[i].Id);
            printf("model de avion : %s\n", Avion[i].Avion_Model);
            printf("capacitie de avion : %d \n",Avion[i].capacite);
            printf("statu d avion : %s\n", Avion[i].status);
            printf("date de entrer de avion :  %s\n", Avion[i].Date_Entre);
            printf("____________________________________________________________\n");
        }
    }
}

void Modifier_Avion()
{
    int found = 0;
    int choice_modification;

    printf("Enter une Id pour Modifier : ");
    scanf("%d", &Search_Id);

    for (int i = 0; i < nbr_total_avion; i++)
    {
        if (Search_Id == Avion[i].Id)
        {
           found = 1;
            printf("  ____________________________________\n");
            printf(" |1-Modifier la model d avion :\n ");
            printf(" |2-Modifier la capacite d avion :\n");
            printf(" |3-Modifier la statu d avion :\n ");
            printf(" |4-Modifier Tout les fromation :\n ");
            printf(" |____________________________________\n");

            printf("enter votre choix pour modifier :");
            scanf("%d", &choice_modification);

            switch (choice_modification)
            {
            case 1:
                printf("entrer la model de avion  :");
                scanf(" %[^\n]", Avion[i].Avion_Model);
                break;

            case 2:
                printf("entrer la capacite de avion  :");
                scanf("%d", &Avion[i].capacite);
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
                break;

            case 4:
                printf("entrer la model de avion  :");
                scanf(" %[^\n]", Avion[i].Avion_Model);

                printf("entrer la capacite de avion  :");
                scanf("%d", &Avion[i].capacite);

                printf("la status de avion  :\n");

                printf("1- Disponible\n");
                printf("2- En maintenance\n");
                printf("3- En vol\n");

                printf("enter votre statu:\n");
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
    if(!found){
      printf("Pas d Avion avec cet ID !!!\n");
      
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
        if (Search_Id == Avion[i].Id)
            found = 1;
        {
            for (int j = i; j < nbr_total_avion - 1; j++)
            {
               Avion[j] = Avion[j+1];
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
        if (Search_Id == Avion[i].Id)
        {
            found = 1;
            printf("-------------- avion avec Id %d trouver ---------------\n" ,Avion[i].Id);
            printf("Avion : %d\n", i + 1);
            printf(" ID d Avion  :%d \n", Avion[i].Id);
            printf("model de avion : %s\n", Avion[i].Avion_Model);
            printf("capacitie de avion : %d \n",Avion[i].capacite);
            printf("statu d avion : %s\n", Avion[i].status);
            printf("date de entrer de avion :  %s\n", Avion[i].Date_Entre);
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
        if (strcmp(Search_model, Avion[i].Avion_Model) == 0)
        {
            found = 1;
            printf("-------------- avion avec Id %d trouver ---------------\n" ,Avion[i].Id);
            printf("Avion : %d\n", i + 1);
            printf("ID d Avion  :%d \n", Avion[i].Id);
            printf("model de avion : %s\n", Avion[i].Avion_Model);
            printf("capacitie de avion : %d \n",Avion[i].capacite);
            printf("statu d avion : %s\n", Avion[i].status);
            printf("date de entrer de avion :  %s\n", Avion[i].Date_Entre);
            printf("____________________________________________________________\n");
        }

        if (!found)
        {
            printf("Pas d Avion avec cet Model !!!\n");
        }
    }
}
