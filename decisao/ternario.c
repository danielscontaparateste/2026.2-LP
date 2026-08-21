#include <stdio.h>

int main(){

    int x;

    puts("Entre com um valor: "); // printf("Entre com um valor");
    scanf("%d",&x);

    // (x % 2)?printf("y = %d\n",x*10):printf("y = %d\n",x*2);
    
    // int y;
    // y = (x % 2)?x*10:x*2;
    // printf("y = %d\n",y);

    // x = (x % 2)?x*10:x*2; // Valor do X sendo alterado
    x *= (x % 2)?10:2; // Valor do X sendo alterado
    printf("x : %d\n",x); 

    return 0;
}