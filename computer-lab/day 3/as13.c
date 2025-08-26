#include <stdio.h>
#include <math.h>

int main() {
    
    float l,b;
    printf("enter length: ");
    scanf("%f",&l);
    printf("enter breadth: ");
    scanf("%f",&b);
    printf("perimeter: %f\n",2*(l+b));
    printf("area: %f",l*b);
    return 0;
    
}