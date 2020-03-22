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
    double i,x,min;
    min = -0.99;
    x=function(min);
    for(i=-0.98;i<2;i=i+0.01){
        if(x<function(i)){
            min = i;
            x = function(i);
        }
    }
    printf("min func(%f) = %f", min, x);

    return 0;
}
