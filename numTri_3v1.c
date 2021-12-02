#include<stdio.h>
#include<conio.h>

int main()
{
    int n=0,i,j,k;
    printf("Enter pattern size: ");
    scanf("%d", &n);

    for(i=1;i<=n;i++)
    {
        for(j=n; j>=i; j--)
            printf("%d ",j);
        printf("\n");
    }
    getch();
    return 0;
}

// 7 6 5 4 3 2 1
// 7 6 5 4 3 2
// 7 6 5 4 3
// 7 6 5 4
// 7 6 5
// 7 6
// 7