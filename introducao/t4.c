#define TRUE 1
#define FALSE 0

#include <stdio.h>

int main(){

    int x = 10;
    int y;

    // y = 5 + x++;
    y = 5 + ++x;

    printf("x: %d, y: %d\n", x, y);

    unsigned char res = (5<10) * 65 ; 
    // printf("%#x\n", 5<10);
    // printf("%#x\n", res);
    // printf("%c\n", res);
    printf("%u\n", res);

    puts("Contador: ");
    register int k = 10;
    while(TRUE){
        printf("%d\n",k--);
        // if (k==FALSE) break;  
        if (!k) break;
    }


    return 0;
}