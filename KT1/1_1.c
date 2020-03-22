#include <stdio.h>
#include <stdlib.h>

double function(double x)
{
    double y;

    y = (pow(x,3)+sqrt(1+pow(x,3)))/(1+exp(x));
    return y;
}

int main()
{
    double p;
    printf("Enter arg\n");
    scanf("%lf", &p);
    if (p>-1){
        printf("%f", function(p));
    }
    else{
        printf("Enter another number!\n");
    }
    return 0;
}
