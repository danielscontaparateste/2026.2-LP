#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIN 5 
#define COL 3

#define MX 10

int main(){
    float m[LIN][COL];

    // Popular a matriz
    srand(time(NULL));

    for (int k=0; k<LIN; k++){
        for (int j=0; j<COL; j++){
            m[k][j] = ((float) rand() / (float) RAND_MAX) * MX;
        }
    }

    // Apresentar a matriz
    for (int k=0; k<LIN; k++){
        for (int j=0; j<COL; j++){
            printf("[%p] %.2f\t",&m[k][j],m[k][j]);
        }
        printf("\n");
    }
    
    return 0;
}