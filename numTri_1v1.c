#include<stdio.h>

int main()
{
    int n=0,i,j;
    printf("Enter pattern size: ");
    scanf("%D", &n);

    for(i=1;i<=n;i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}

// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5