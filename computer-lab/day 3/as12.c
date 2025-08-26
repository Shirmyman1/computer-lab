#include <stdio.h>
#include <math.h>

int main() {
    float p,n,t,r,x,y;
    printf("enter the principal amount: ");
    scanf("%f",&p);
    printf("enter interest rate: ");
    scanf("%f",&r);
    printf("enter number of times compounded: ");
    scanf("%f",&n);
    printf("enter time in years: ");
    scanf("%f",&t);
    x=(1+r/100);
    y=n*t;
    double a=(double)p*pow((double) x,(double) y);
    printf("%lf",a);
    return 0;
    
}