/*
    Exemplo: AND para Desligar Bit.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    unsigned char x = 10; // 0000 1010 -> 0000 1110
    unsigned char y;

    unsigned char mask=0x01; // 0000 0001

    unsigned char pos;

    puts("Entre com a posição que deseja alterar: ");
    scanf("%hhu",&pos);

    if ((pos<0) || (pos>7)){
        puts("Entre com um valor de posição entre 0 e 7");
        exit(1);
    }

    // const unsigned pos = 3; // Iniciando em posição zero.

    mask = mask << pos; // 0000 1000
    mask = ~mask; // 1111 0111

    y = x & mask;

    printf("y : %hhu\n", y);
    

    // printf("mask: %#x\n",mask);

    
    return 0;
}