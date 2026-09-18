#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10
#define BASE -5
#define AMP 10

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

    // Ordenação por Seleção - Crescente
    int aux;
    for (int k=0; k<N-1; k++){
        for (int j=k+1; j< N; j++ ){
            if (vetor[k]>vetor[j]){
                aux = vetor[k];
                vetor[k] = vetor[j];
                vetor[j] = aux;
            }
        }
    }

    puts("## Vetor ordenado ##");
    for (int k=0; k<N; k++){
        printf("[%p] %d\n",&vetor[k], vetor[k]);
    }

    return 0;
}