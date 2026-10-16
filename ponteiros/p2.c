#include <stdio.h>
// #include <stdlib.h>

// Protótipos das Funções
// int somar(const int v1, const int v2);
int somar(const int, const int);
int multiplicar(const int, const int);

int main(){
    int a, b, c;
    int *pa = &a, *pb = &b, *pc = &c;
    
    puts("Digite o primeiro valor: ");
    scanf("%d",pa);

    puts("Digite o segundo valor: ");
    scanf("%d",pb);

    // *pc = *pa + *pb;

    *pc = somar(*pa, *pb);
    // *pc = multiplicar(*pa, *pb);

    printf("%d + %d = %d\n",*pa,*pb,*pc);

    return 0;
}

int somar(const int v1, const int v2){
    return (v1+v2);
}

int multiplicar(const int v1, const int v2){
    return (v1*v2);
}
