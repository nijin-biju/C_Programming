#include <stdio.h>

int main()
{
    int i, n;
    printf("Enter the number of elements in Universal Set: ");
    scanf("%d", &n);
    int U[n], A[n], B[n];
    int uni[n], ints[n], diffB[n], diffA[n], compA[n], compB[n];
    printf("Enter %d elements of Universal Set:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &U[i]);
    }
    printf("\nEnter the bit representation of Set A (%d bits):\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("\nEnter the bit representation of Set B (%d bits):\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &B[i]);
    }
    printf("\nUniversal Set is: {");
    for(i = 0; i < n; i++)
    {
        printf("%d ", U[i]);
    }
    printf("}\n");
    printf("Set A: {");
    for(i = 0; i < n; i++)
    {
        if(A[i] == 1)
        {
            printf("%d ", U[i]);
        }
    }
    printf("}\n");
    printf("Set B: {");
    for(i = 0; i < n; i++)
    {
        if(B[i] == 1)
        {
            printf("%d ", U[i]);
        }
    }
    printf("}\n");
    printf("\nUnion of A and B in bit representation is: ");
    for(i = 0; i < n; i++)
    {
        uni[i] = A[i] | B[i];
        printf("%d ", uni[i]);
    }
    printf("\nUnion: {");
    for(i = 0; i < n; i++)
    {
        if(uni[i] == 1)
        {
            printf("%d ", U[i]);
        }
    }
    printf("}\n");
    printf("\nIntersection of A and B in bit representation is: ");
    for(i = 0; i < n; i++)
    {
        ints[i] = A[i] & B[i];
        printf("%d ", ints[i]);
    }
    printf("\nIntersection: {");
    for(i = 0; i < n; i++)
    {
        if(ints[i] == 1)
        {
            printf("%d ", U[i]);
        }
    }
    printf("}\n");
    printf("\nComplement of A in bit representation is: ");
    for(i = 0; i < n; i++)
    {
        compA[i] = 1 - A[i];
        printf("%d ", compA[i]);
    }
    printf("\nComplement of A: {");
    for(i = 0; i < n; i++)
    {
        if(compA[i] == 1)
        {
            printf("%d ", U[i]);
        }
    }
    printf("}\n");
    printf("\nComplement of B in bit representation is: ");
    for(i = 0; i < n; i++)
    {
        compB[i] = 1 - B[i];
        printf("%d ", compB[i]);
    }
    printf("\nComplement of B: {");
    for(i = 0; i < n; i++)
    {
        if(compB[i] == 1)
        {
            printf("%d ", U[i]);
        }
    }
    printf("}\n");
    printf("\nDifference of A-B in bit representation is: ");
    for(i = 0; i < n; i++)
    {
        diffA[i] = A[i] & compB[i];
        printf("%d ", diffA[i]);
    }
    printf("\nA-B: {");
    for(i = 0; i < n; i++)
    {
        if(diffA[i] == 1)
        {
            printf("%d ", U[i]);
        }
    }
    printf("}\n");
    printf("\nDifference of B-A in bit representation is: ");
    for(i = 0; i < n; i++)
    {
        diffB[i] = B[i] & compA[i];
        printf("%d ", diffB[i]);
    }
    printf("\nB-A: {");
    for(i = 0; i < n; i++)
    {
        if(diffB[i] == 1)
        {
            printf("%d ", U[i]);
        }
    }
    printf("}\n");

    return 0;
}
