#include <stdio.h>
int main()
{
    int nbr1, nbr2;
    printf("entrer nbr1 : ");
    scanf("%d", &nbr1);
    printf("entrer nbr2 : ");
    scanf("%d", &nbr2);

    int nbr3 = nbr1;
    int nbr4 = nbr2;
    int n;
    do
    {
        n = nbr1 % nbr2;
        nbr1 = nbr2;
        nbr2 = n;
    } while (nbr2 != 0);
    printf("%d/%d", nbr3/nbr1, nbr4/nbr1);

    return 0;
}