#include <stdio.h>
#include <string.h>

#define TAM 10

int main(){
    char str[TAM];
    char s2[TAM];

    puts("Digite o seu nome: ");
    // gets(str); // Exercício: Substituir pelo fgets e scanf (observar as diferenças)
    fgets(str,TAM,stdin);

    str[strcspn(str, "\n")] = '\0';
    
    // scanf("%10[^\n]s",str); 

    // printf("Pos = %lu, Char = %d\n",strcspn(str, "\n"),str[strcspn(str, "\n")]);

    // char ch;
    // while ( (ch = getchar()) != '\n');
    
    // fgets(s2,TAM,stdin);

    unsigned long int count=0;
    while (str[count]!='\0') count++;

    // Apenas apresentar o papel do \0
    for (int k=0; k<TAM; k++){
        printf("%d\n",str[k]);
    }

    printf("Nome digitado: %s\n",str);

    

    // printf("Segunda string: %s\n",s2);

    printf("Quantidade de caracteres com strlen =  %lu e próprio = %lu\n", strlen(str), count);


    return 0;
}