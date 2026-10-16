#include <stdio.h>

int main(){
    int a, b, c;
    int *pa = &a, *pb = &b, *pc = &c;
    
    puts("Digite o primeiro valor: ");
    scanf("%d",pa);

    puts("Digite o segundo valor: ");
    scanf("%d",pb);

    *pc = *pa + *pb;

    printf("%d + %d = %d\n",*pa,*pb,*pc);


    return 0;
}