#include <stdio.h>

int main(){
    printf("int: %lu bytes\n", sizeof(int));
    printf("float: %lu bytes\n", sizeof(float));
    printf("double: %lu bytes\n", sizeof(double));
    printf("char: %lu bytes\n", sizeof(char));

    int a = 5;
    int b = 2;

    float c = ((float) a) / b;

    printf("Resultado: %f\n",c);


    printf("variável c: %lu bytes\n", sizeof(c));


    return 0;
}