#include <stdio.h>
//DIY

int main(void) {
    int i;
    scanf("%d", &i);

    if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0) {
        printf("윤년입니다.\n");
    }   
    else { printf("평년입니다.\n"); }

    return 0;
}