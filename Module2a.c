#include<stdio.h>

int main()
{
    int array[5], k, upper_bound, lower_bound, i;
    printf("Enter elements: ");
    for(i = 0; i < 5; i++) {
        scanf("%d", &array[i]);
    }
    upper_bound = 5;
    lower_bound = 0;
    for(k = lower_bound; k < upper_bound; k++) {
        printf("%d ", array[k]);
    }
    
    return 0;
}