#include <stdio.h>

int main()
{
        int i,j,k,stars,spaces;
        for(i=1;i<8;i++)
        {
                if(i<5)
                {
                        stars=i*2-1;
                        spaces=4-i;
                }else{
                        stars=7-(i-4)*2;
                        spaces=i-4;
                }
                for(k=1;k<=spaces;k++)
                {
                        printf(" ");
                }
                for(k=1;k<=stars;k++)
                {
                        printf("*");
                }
                printf("\n");
        }
        return 0;
}