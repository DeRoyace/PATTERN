#include<stdio.h>
#include<conio.h>
int i,j,k,l,m,p,q,r,t,s;
int getZero()
{
    int n=0;
    printf("Enter  Pattern size: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==1 || i==n)
                printf("$");
            else if(j==1 || j==n || j==i || j==n-i+1)
                printf("$");
            else
                printf(" ");
            
        }
        printf("\n");
    }
    getch();
    return 0;
}

int sandClock()
{
     int n=0;
    printf("Enter  Pattern size: ");
    scanf("%d", &n);
    printf("\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==1 || i==n )
                printf("$");
            else if(j==1 || j==n || j==i || j==n-i+1)
                printf("$");
            else if( (j>=i+1 && j<=n-i ) || (j<=i-1 && j>=n-i+1) )
                printf("$");
            else
                printf(" ");
            
        }
        printf("\n");
    }
    printf("\n");
    getch();
    return 0;
}