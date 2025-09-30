#include<stdio.h>

int main(){


    int arr[6];
    int element;

    printf("enter number of elemnt you want :");
    scanf("%d" , &element);

    for(int i = 0 ; i < element ; i++){
        printf("elmnet %d :" , i+1);
        scanf("%d" , &arr[i]);
    }

    for(int i = 0 ; i < element ; i++){

        for(int j = 0 ; j < element; j++){
            if(arr[j] > arr[j+1] ){
                int stock = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = stock;
            }
        }
    }

    for(int s = 0 ; s < element ; s++){
        printf("%d\t" , arr[s] );
    }


    return 0;
}