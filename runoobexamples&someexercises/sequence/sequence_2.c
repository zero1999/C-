#include <stdio.h>

int main(void)
{
    int x,y,z;
    printf("输入三个数字(例如：1,2,3)\n"); 
    scanf("%d,%d,%d",&x,&y,&z);
    if(x>y&&y>z)
        printf("%d,%d,%d",z,y,x);

    if(x>z&&z>y)
        printf("%d,%d,%d",y,z,x);

    if(y>x&&x>z)
        printf("%d,%d,%d",z,x,y);

    if(y>z&&z>x)
        printf("%d,%d,%d",x,z,y);

    if(z>x&&x>y)
        printf("%d,%d,%d",y,x,z);

    if(z>y&&y>x)
        printf("%d,%d,%d",x,y,z);
        
    return 0; 
