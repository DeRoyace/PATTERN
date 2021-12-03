#include<stdio.h>

int main()
{
    int n,i,j,k; 
    char ch;
    printf("\nEnter Pattern size : ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        for(j=i-1, ch='A'+j; j>0; j-- )
        {
            printf("%c ", --ch);
        }
        printf("\n");
    }
    return 0;
}

/*

A
B A
C B A
D C B A
E D C B A

*/