#include<stdio.h>
#include<conio.h>

int main()
{
    int n=0,i,j,k;
    printf("Enter pattern size: ");
    scanf("%d", &n);

    for(i=n;i>0;i--)
    {
        for(j=i; j>0; j--)
            printf("%d ",j);
        printf("\n");
    }

    getch();
    return 0;
}