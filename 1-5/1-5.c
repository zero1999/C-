#include <stdio.h>

int main()
{
    double a = 0.0;
    double b = 0.0;
    double c = 0.0;
    const double d = 0.05;
    printf("Please input the capital as xxx.xx : ");
    scanf("%lf", &a);
    printf("Please input the interest as xxx.xx : ");
    scanf("%lf", &b);
    c = a*(1+b/100*(1-d));
    printf("You will receive: %.2lf yuan\n",c);

    return 0;
}
