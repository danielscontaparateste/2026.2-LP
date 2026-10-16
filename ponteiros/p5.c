#include <stdio.h>
#include <stdlib.h>

// Protótipos das Funções
void lerVetor(int *const, const unsigned);
void imprimirVetor(const int *const, const unsigned);
void somar(const int *const, const unsigned, int *const);
int *alocarMemoria(const unsigned);

int main(){
    int resultado;

    unsigned tamanho = 0;
    puts("Informe a quantidade de elementos: ");
    scanf("%u",&tamanho);

    int *pa = alocarMemoria(tamanho);
    
    lerVetor(pa, tamanho);
    imprimirVetor(pa, tamanho);
    
    somar(pa, tamanho, &resultado);

    printf("Somatório do vetor: %d\n",resultado);

    free(pa);
    
    return 0;
}

int *alocarMemoria(const unsigned tamanho){
    int *p = NULL;
    
    if (!(p = (int *) malloc(tamanho * sizeof(int)))){
        puts("Não há memória disponível");
        exit(1);
    }

    return p;
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


