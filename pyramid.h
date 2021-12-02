#include<stdio.h>
#include<conio.h>

int getPyramid()
{
    int i,j,k,m;
    int n;
    printf("Enter Pyramid size: ");
    scanf("%d", &n);

    for(i=1;i<=n;i++)
    {
        for(k=n; k>i; k--)
            printf("  ");
        for(j=1; j<=i; j++)
        {
            printf("%d ",j);
        }

        for(m=i-1; m>0; m--)
        {
            printf("%d ",m);
        }
        printf("\n");
    }
    getch();
    return 0;
}