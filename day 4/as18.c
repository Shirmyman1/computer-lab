#include <stdio.h>

int main(){
    
    int x,y;
    printf("enter 2 no: ");
    scanf("%d %d",&x,&y);
    if(x>y)
    printf("%d",x);
    else if(y>x)
    printf("%d",y);
    else
    printf("theyre equal");
    
    return 0;
}