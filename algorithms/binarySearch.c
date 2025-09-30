#include <stdio.h>

int main()
{
    int arr[10] = {9, 11, 13, 15, 17, 19, 21, 23, 25, 28};
    int mid, start = 0, end = 9, x;
    int found = 0;

    printf("enter value de X :");
    scanf("%d", &x);

for(int i = 0 ; i < 10 ; i++)
    {

        mid = (start + end) / 2;
        if (arr[mid] == x)
        {
            found = 1;
            printf("le nombre X dans la podition %d", mid);
            break;
        }
        else if (arr[mid] > x)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    if (found == 0)
    {
        printf("no number in array");
    }

    return 0;
}