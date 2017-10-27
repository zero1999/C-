#include<stdio.h>
int main()
{
    int rows, i, j, space, m;

    printf("please enter the number of rows: ");
    scanf("%d",&rows);
    printf("please enter the number of the space between two patterns, m: ");
    scanf("%d",&m);

    for(i=rows; i>=1; --i)
    {
        for(space=0; space<i; ++space)
            printf("  ");

        for(j=0; j < 2*rows-i; ++j)
            printf("* ");

        for(space=0; space<m; ++space)
            printf("  ");

        for(j=i; j <= 2*i-1; ++j)
            printf("* ");

        for(j=0; j < i-1; ++j)
            printf("* ");

        printf("\n");
    }

    return 0;
}
