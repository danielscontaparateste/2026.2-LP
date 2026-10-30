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

    // Guardar os endereços de todos os números pares
    unsigned long int qtdPares = 0;
    for (int k=0; k<n; k++){
        qtdPares += (*(pv+k)%2)?0:1;
    }

    
    int **ppares = NULL;

    if (!(ppares = (int **) malloc(qtdPares * sizeof(int *)))){
        puts("Erro no processo de alocação dinâmica de memória");
        exit(1);
    }

    int c = 0;
    for (int k=0; k<n; k++){
        if (!((*(pv+k))%2)){
            ppares[c] = pv+k;
            c++;
        }
    }

    for (int k=0; k<qtdPares; k++){
        printf("[%p] Endereço do elemento PAR: %p -> %d\n",ppares+k, *(ppares+k), *(*(ppares+k)));
    }

    printf("Quantidade de Pares: %lu\n", qtdPares);
        
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

