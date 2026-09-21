#include <stdio.h>
#include <string.h>

#define TAM 80

int main(){
    char str[TAM];

    puts("Digite o seu nome: ");
    gets(str); // Exercício: Substituir pelo fgets e scanf (observar as diferenças)

    unsigned long int count=0;
    while (str[count]!='\0') count++;

    // Apenas apresentar o papel do \0
    for (int k=0; k<10; k++){
        printf("%x\n",str[k]);
    }

    printf("Quantidade de caracteres com strlen =  %lu e próprio = %lu\n", strlen(str), count);


    return 0;
}