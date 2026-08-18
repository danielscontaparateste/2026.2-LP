#include <stdio.h>

int main(){
    char x = -10;
    char y;

    // y = x * -1;
    y = ~x + 1;

    printf("x= %d , y = %d\n",x,y);

    return 0;
}