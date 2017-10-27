#include <stdio.h> 
/* 
 * 请使用递归函数完成本题
 * 小编已将正确代码放在左侧任务的“不知道怎么办”里
 * 小编希望各位童鞋独立完成哦~
 */
int the_age(n)
{   
    if(n==1)
    {   
        n=10;
        return 10;
    }
    else
    {
        n=the_age(n-1)+2;
    }
    return n;
}



int main() 
{
    int i;
    i= the_age(5);
	printf("第5个人的年龄是%d岁", i); 
	return 0;
}