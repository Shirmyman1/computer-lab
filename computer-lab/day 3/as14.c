
#include <stdio.h>
#include <math.h>

int main() {
    
    float a;
    printf("enter a number: ");
    scanf("%f",&a);
    int x=ceil(a);
    int y=floor(a);
    printf("ceil: %d, floor: %d",x,y);
    return 0;
    
}