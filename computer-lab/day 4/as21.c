#include <stdio.h>

int main() {
    int x;
    printf("enter a year: ");
    scanf("%d",&x);
    if(x>0){
        if(x%100==0){
            if(x%400!=0)
            printf("not a leap year");
        }
        else{
            if(x%4==0)
            printf("leap year");
        }
    }
    else
    printf("invalid year");
    return 0;
}