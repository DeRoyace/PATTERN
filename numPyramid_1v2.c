#include<stdio.h>
#include<conio.h>

int main()
{
    int n=0,i,j,k;
    printf("Enter pattern size: ");
    scanf("%d", &n);

    for(i=n;i>0;i--)
    {
        for(k=n-1; k>=i; k--)
        printf(" ");
        for(j=1;j<=i;j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    getch();
    return 0;
}

// 1 2 3 4 5 6 7
//  1 2 3 4 5 6
//   1 2 3 4 5
//    1 2 3 4
//     1 2 3
//      1 2
//       1