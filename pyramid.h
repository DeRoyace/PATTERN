#include<stdio.h>
#include<conio.h>

int getPyramid()
{
    int i,j,k,m;
    int n;
    printf("Enter Pyramid size: ");
    scanf("%d", &n);
    printf("\n");
    for(i=1;i<=n;i++)
    {
        for(k=n; k>i; k--)
            printf("0 ");
        for(j=1; j<=2*i-1; j++)
        {
            printf("* ");
        }
            for(k=n; k>i; k--)
            printf("0 ");
        printf("\n");
    }
    getch();
    return 0;
}