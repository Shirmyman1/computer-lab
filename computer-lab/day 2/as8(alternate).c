#include <stdio.h>

int main() {
    
    char choice;
    float n;
    printf("Enter C for celsius, F for fahrenheit: ");
    scanf("%c",&choice);
    printf("Enter temp: ");
    scanf("%f",&n);
    switch(choice){
        case 'c':
            printf("%f F",(1.8*n)+32.0);
            break;
        case 'C':
            printf("%f F",(1.8*n)+32.0);
            break;
        case 'f':
            printf("%f C",(n-32)*5/9);
            break;
        case 'F':
            printf("%f C",(n-32)*5/9);
            break;

    }

    return 0;
}