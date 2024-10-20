#include <stdio.h>
int main()
{
    float a, b, x;
    printf("Enter a ->");
    scanf("%f", &a);
    printf("Enter b ->");
    scanf("%f", &b);
    printf("Enter x ->");
    scanf("%f", &x);
    float max;

    if (a!=b)
    {
        if (a>b)
            max = a;
        else
            max = b;
        if (max>x)
            printf("%f - max - x\n",max-x);
        if (max<x)
            printf("%f - max + x\n",(a+b-max)+x);
        if (max==x)
            printf("%f - a и b равны\n",max=x);
        }
    else
        printf(" - a и b равны\n");
    return 0;
}