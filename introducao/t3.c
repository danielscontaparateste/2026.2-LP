#include <stdio.h>

int main(){
    unsigned char x = 250;

    for (int k=0; k<10; k++){
        x += 1; // x = x + 1;
        printf("x: %d\n",x);

    }

    return 0;

}