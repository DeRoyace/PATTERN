#include<stdio.h>
#include<conio.h>

int main()
{
    int n=0,i,j,k,m;
    printf("Enter pattern size: ");
    scanf("%D", &n);

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
/*

          1
        1 2 1
      1 2 3 2 1
    1 2 3 4 3 2 1
  1 2 3 4 5 4 3 2 1
1 2 3 4 5 6 5 4 3 2 1

*/