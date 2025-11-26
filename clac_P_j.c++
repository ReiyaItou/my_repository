#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define M_PI 3.14159265358979323846264338327950288

double calc_integral(int i,double upper,double h)
{
    double x_1,x_2;
    x_1 = upper + i*h;
    x_2 = x_1 + h;

    return f = 
}

int mian()
{
    int n=128;
    double upper = M_PI;
    double lower = -M_PI;
    double h,total_sum,int_sum;
    int i;

    h= (upper - lower)/n;
    total_sum = 0.0;
    int_sum = 0.0;

    for(i; i<n; i++)
    {
        int_sum = int_sum + calc_intgral();
    }

    printf("n")





}