#include <stdio.h>
#include <math.h>

int main() {
    
    int a,b,c;
    printf("enter a: ");
    scanf("%d",&a);
    printf("enter b: ");
    scanf("%d",&b);
    printf("enter c: ");
    scanf("%d",&c);
    float D=sqrt(((b*b)-4*a*c));
    float x1=(-b-D)/(2*a);
    printf("%f",x1);
    float x2=(D-b)/(2*a);
    printf("the two roots are: %f,%f",x1,x2);
    return 0;
    
}