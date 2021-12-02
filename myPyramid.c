#include<stdio.h>
#include "pyramid.h"
int main()
{
    int n;
    printf("Enter Pyramid size: ");
    scanf("%d", &n);
    getPyramid(n);
    return 0;
}