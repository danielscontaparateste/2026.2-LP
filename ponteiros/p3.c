#include <stdio.h>
// #include <stdlib.h>

// Protótipos das Funções
// int somar(const int v1, const int v2);
// int somar(const int *const, const int *const);
void somar(const int *const, const int *const, int *const);

int main(){
    int a, b, c;
    int *pa = &a, *pb = &b, *pc = &c;
    
    puts("Digite o primeiro valor: ");
    scanf("%d",pa);

    puts("Digite o segundo valor: ");
    scanf("%d",pb);

    // *pc = *pa + *pb;

    // *pc = somar(pa, pb);
    somar(pa, pb, pc);
    // *pc = multiplicar(*pa, *pb);

    printf("%d + %d = %d\n",*pa,*pb,*pc);

    return 0;
}

// int somar(const int *const p1, const int *const p2){
//     return (*p1 + *p2);
// }

void somar(const int *const p1, const int *const p2, int *const p3){
    *p3 = *p1 + *p2;
}


