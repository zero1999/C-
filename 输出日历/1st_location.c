#include <stdio.h>

int main()
{
    int i,j,k,a;

    printf("Calendar 2006 - 12\n\n");

    for(k=1;k<=28;++k)
        printf("-");
    printf("\n");

    scanf("%d",&a);

    if(a==7)
    {
        a=0;
    }
    else
    {
        a=a;
    }

    printf("Su  Mo  Tu  We  Th  Fr  Sa\n");

    for(k=1;k<=28;++k)
        printf("-");
    printf("\n");

    for(i=1; i<=a; i++)
    {
        printf("%4c",' ');
    }
    //输出4a个空格

    for(j=1; j<=31; j++)
    {
        if((j+a)%7==0)
           {
               printf("%3d",j) ;
               printf("\n");
           }
    //输出从1至31的日历
        else
               printf("%3d ",j) ;
    }
    printf("\n");
    for(k=1;k<=28;++k)
        printf("-");
    printf("\n");
    return 0;
}
