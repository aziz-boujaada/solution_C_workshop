#include <stdio.h>
#define N 10

int main(void) {
    int a[N], i;
    int size = (int)sizeof(a) / sizeof(a[0]);
    printf("Entrez %d nombres : ", N);
    for (i = 0; i < size; i++)
        scanf("%d", &a[i]);

    printf("Dans l'ordre inverse :");
    for (i = size - 1; i >= 0; i--)
        printf(" %d", a[i]);
    printf("\n");
     

    printf(" size %d" , size);
    return 0;
}