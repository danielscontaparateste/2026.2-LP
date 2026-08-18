#include <stdio.h>

int main(){
    char c1;
    char c2;

    puts("Digite o primeiro caractere: ");
    // scanf("%c",&c1);

    c1 = getchar();

    puts("Digite o segundo caractere: ");
    // scanf("%c",&c2);

    getchar();

    c2 = getchar();

    printf("c1: %x \t c2: %x\n",c1,c2);


    return 0;
}