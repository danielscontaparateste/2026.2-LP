#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *alocarMemoria(const unsigned);
void popularVetor(int *const, const unsigned, int, int);
void imprimirVetor(const int *const, const unsigned);


int main(){
    unsigned n;
    puts("Qual o tamanho do vetor: ");
    scanf("%u",&n);

    int limite; // base;
    puts("Qual o maior valor possível (limite)?: ");
    scanf("%d",&limite);

    // puts("Qual o menor valor possível (base)?: ");
    // scanf("%i",&base);

    int *pv = alocarMemoria(n);
    
    srand(time(NULL));
    popularVetor(pv, n, 0, limite);
    imprimirVetor(pv, n);

    // Guardar os endereços da primeira ocorrência de número par e primeira ocorrência de número impar. 
    int *pnum[2] = {NULL};

    for (int k=0; k<n; k++){
        if (*(pv+k) % 2){
            pnum[1] = pv+k;
            break;
        }
    }

    for (int k=0; k<n; k++){
        if (!(*(pv+k) % 2)){
            pnum[0] = pv+k;
            break;
        }
    }

    for (int k=0; k<2; k++){
        printf("[%p] Endereços %d: %p -> %d\n",pnum+k, k, *(pnum+k), *(*(pnum+k)));
    }
        
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

void popularVetor(int *const p, const unsigned tamanho, int base, int limite){
    for (int k=0; k < tamanho; k++){
        *(p+k) = base + ( rand() % (limite - base));
    }
}

void imprimirVetor(const int *const p, const unsigned tamanho){
    for (int k=0; k < tamanho; k++){
        printf("[%p] %d\n",p+k, *(p+k));
    }
}

