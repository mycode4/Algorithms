#include <stdio.h>

int main ()
{
    int n, coin[100], use[100], i, owed;

    printf("Enter number of denominations : ");
    scanf("%d", &n);

    printf("\nEnter the denominations in descending order: ");

    for(i=0; i< n; i++)
    {
        scanf("%d", &coin[i]);
    }

    printf("\nEnter the amount owed : ");
    scanf("%d", &owed);

    for(i=0; i < n; i++)
    {
        use[i] = owed / coin[i];
        owed %= coin[i];
    }

    printf("\nSolution: \n");
    for(i=0; i < n; i++)
    {
        printf("%d is use these: %d \n", coin[i], use[i]);
    }
}
