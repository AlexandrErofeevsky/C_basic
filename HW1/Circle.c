#include <stdio.h>
#include <stdlib.h>

double diameter(double r)
{
    double d;

    d = r*2;

    printf("Diameter is %f\n",d);
}

double perimeter(double r)
{
    double p;
    double pi = 3.14159;

    p = 2*pi*r;

    printf("Perimeter is %f\n",p);
}

double area(double r)
{
    double a;
    double pi = 3.14159;

    a = pi*r*r;

    printf("Area is %f\n",a);
}

int main()
{
    double x;

    scanf("%lf", &x);
    diameter(x);
    perimeter(x);
    area(x);
    return 0;
}
