#include<stdio.h>

int main() {

    int p[100];
    int i, n, a;
    
    printf("Enter length of array:");
    scanf("%d", &n);

    printf("Enter %d elements of the array:\n", n);
    for(i=0; i<=n-1; i++)
        scanf("%d", &p[i]);

    printf("\nThe array is:\n");
    for(i=0; i<=n-1; i++)
        printf("%d\n", p[i]);

    printf("\nEnter the location/position to delete:");
    scanf("%d", &a);
    
    a--;

    for (i=a; i <= n-2; i++) {
        p[i] = p[i+1];
    }

    p[n-1] = 0;

    printf("Array after deleting the element is\n");
    for(i=0; i<=n-2; i++)
        printf("%d\n", p[i]);

    return 0;
}