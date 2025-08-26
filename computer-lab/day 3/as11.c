#include <stdio.h>

//a. WACP to find the last digit of an integer using modulus

int main(){
    
    int a;
    printf("enter a number: ");
    scanf("%d",&a);
    printf("the last digit is %d\n", a%10);
//b. WACP to find the last digit of an integer without using modulus
    int b=a/10;
    int ld=a-b*10;
    printf("the last digit is %d", ld);
    
    return 0;

}