#include<stdio.h>

int main()
{
    int n,i,j,k; 
    char ch;
    printf("\nEnter Pattern size : ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        for(k=n; k>i; k--)
            printf(" ");
        for(j=1, ch='A'; j<=i; j++ )
        {
            printf("%c ", ch++);
        }
        printf("\n");
    }
    return 0;
}

/*

       A
      A B
     A B C
    A B C D
   A B C D E
  A B C D E F
 A B C D E F G
A B C D E F G H

*/