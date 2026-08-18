#include <stdio.h>

int main(){
    unsigned char x = 10;
    unsigned char y = 4;

    x = x ^ y;
    y = x ^ y;
    x = x ^ y;

    printf("x = %hhu , y = %hhu\n",x, y);

    return 0;
}