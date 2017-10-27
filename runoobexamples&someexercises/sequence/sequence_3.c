#include<stdio.h>
#define N 3  // N的值可更改，实现N个数的排序

int main()

{
    int i,j,k,temp;
    int shuzu[N];
    for(i=0;i<N;i++)             //选择法排序
    {
        printf("input the %d number:",i+1);
        scanf("%d",&shuzu[i]);
    }

    for (i=0;i<N-1;i++)
    {
        k=i;
        for(j=i+1;j<N;j++)
        {
            if(shuzu[j]<shuzu[k])   //实现数组从小到大排序
                k=j;
        }
        if(k!=i)
        {
            temp=shuzu[k];
            shuzu[k]=shuzu[i];
            shuzu[i]=temp;
        }
    }
    for(i=0;i<N;i++) printf("%d ",shuzu[i]);
}