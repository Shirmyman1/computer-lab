#include <stdio.h>

int main(){
    
    char x;
    printf("a coin has been tossed h/t ");
    scanf("%c",&x);
    if(x=='h')
    printf("heads");
    else if(x=='t')
    printf("tails");
    else
    printf("please enter h or t");
    
    return 0;
}