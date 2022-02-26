#include <stdio.h>
int main(void){
    int i;
    scanf("%d",&i);

    if(90<=i && i<=100){
        printf("A");
        }
        else if(80<=i && i<=89){
            printf("B");
        }
        else if(70<=i && i<=79){
            printf("c");
        }
        else if(60<=i && i<=69){
            printf("D");
        }
        else{
            printf("F");
        }

return 0;
}