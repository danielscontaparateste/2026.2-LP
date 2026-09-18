#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10
#define BASE -5
#define AMP 100

int main(){

    int vetor[N];

    //Popular o vetor
    srand(time(NULL));
    for (int k=0; k<N; k++){
        vetor[k] = BASE + rand() % AMP;
    }

    //Exibir o vetor
    puts("Vetor não ordenado");
    for (int k=0; k<N; k++){
        printf("[%p] %d\n",&vetor[k], vetor[k]);
    }

    // Ordenação por Bolha - Crescente
    int aux;
    unsigned count = 0;
    unsigned char flag = 0;
    for (int k=0; k<N; k++){
        flag = 0; // Inicio da iteração
        for (int j=0; j< N-1; j++ ){
            if (vetor[j]>vetor[j+1]){
                aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
                flag = 1;
            }
        }
        if (flag) count++; else break;
    }

    puts("## Vetor ordenado - Bolha ##");
    for (int k=0; k<N; k++){
        printf("[%p] %d\n",&vetor[k], vetor[k]);
    }

    printf("\n------\n Contador de iterações: %u\n\n",count);

    return 0;
}