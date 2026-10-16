#include <stdio.h>

#define TAM 2

// Protótipos das Funções
void lerVetor(int *const, const unsigned);
void imprimirVetor(const int *const, const unsigned);
void somar(const int *const, const unsigned, int *const);

int main(){
    // int vetor[] = {10, 20};
    int vetor[TAM], resultado;
    int *const pa = vetor;
    
    lerVetor(pa, TAM);
    imprimirVetor(pa, TAM);
    
    somar(pa, TAM, &resultado);

    printf("Somatório do vetor: %d\n",resultado);
    
    return 0;
}


void lerVetor(int *const p, const unsigned tamanho){
    for (int k=0; k < tamanho; k++){
        printf("Digite o elemento %d\n",k);
        scanf("%d",p+k);
    }
}

void imprimirVetor(const int *const p, const unsigned tamanho){
    for (int k=0; k < tamanho; k++){
        printf("[%p] %d\n",p+k, *(p+k));
    }
}

void somar(const int *const p, const unsigned tamanho, int *const pres){
    *pres = 0;
    for (int k=0; k < tamanho; k++){
        *pres += *(p+k);
    }
}


