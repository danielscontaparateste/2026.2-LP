/*
    Exemplo: OR para Ligar Bit.
*/

#include <stdio.h>

int main(){
    unsigned char x = 10; // 0000 1010 -> 0000 1110
    unsigned char y;

    unsigned char mask=0x01; // 0000 0001

    const unsigned pos = 2; // Iniciando em posição zero.

    mask = mask << pos; // 0000 0100

    y = x | mask;

    printf("y : %hhu\n", y);
    

    // printf("mask: %#x\n",mask);

    
    return 0;
}