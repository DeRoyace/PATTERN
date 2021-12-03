#include<stdio.h>

int main()
{
    int n,i,j,k, m, p; 
    char ch;
    printf("\nEnter Pattern size : ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        for(k=n; k>i; k--)
            printf("  ");
        for(j=1, ch='A'; j<=i; j++ )
        {
            printf("%c ", ch++);
        }

        for(m=i-1,ch='A'+m ; m>0 ; m--)
        {
            printf("%c ", --ch);
        }
        printf("\n");
    }
    return 0;
}

/*

          A
        A B A
      A B C B A
    A B C D C B A
  A B C D E D C B A
A B C D E F E D C B A

*/