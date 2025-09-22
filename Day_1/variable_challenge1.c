#include<stdio.h>

int main(){


     char First_Name[50] ;
     char Last_Name[50] ;
     int age ;
     char Email[50] ;
     char Sexe[50];



     printf("Enter Your First Name :");
     scanf("%s" , First_Name);

     printf("Enter Your Last Name :");
     scanf("%s" , Last_Name);

     printf("Enter Your Age:");
     scanf("%d" , &age);
     
     printf("Enter Your Email:");
     scanf("%s" , Email);

     printf("Enter Your sexe :");
     scanf("%s" , &Sexe);

     printf("========== votre information =========\n");

     printf(" First Name ==>%s\n" , First_Name);
     printf(" Last Name ==>%s\n" , Last_Name);
     printf(" Age ==>%d\n" , age);
     printf(" Email-Address ==>%s\n" , Email);
     printf(" Sexe ==>%s\n" , Sexe);

    return 0;
}