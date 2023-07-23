#include<stdio.h>

int main()
{
    int a[5], k, up,lb, i;
    printf("Enter elements ");
    for(i=0; i<5; i++){
        scanf("%d", &a[i]);
    }
    up=5;
    lb=0;
    for(k=lb; k<up; k++){
        printf("%d ", a[k]);
    }
    	
    return 0;
}
