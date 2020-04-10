#include<stdio.h>

#define max 100

int main() {

    int p[max];
    int n, i, j, k;

    printf("Enter length of array:");
    scanf("%d", &n);

    printf("The array is:\n");
    for(i=0; i<=n-1; i++)
        scanf("%d", &p[i]);

    printf("\nEnter position where to insert:");
    scanf("%d", &k);

    for(j=n-1; j>=k; j--)
        p[j+1]=p[j];

    printf("\nEnter the value to insert:");
    scanf("%d", &p[k]);

    for(i=0; i<=n; i++)
        printf("%d\n", p[i]);

    return 0;
}