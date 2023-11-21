#include <stdio.h>

void main()
{
   int vetorA[] = {1,3,5,7,9,11,13,15,17,19}, vetorB[10], impares = 0, pares = 0;
   for (int i = 0; i < 10; i++) {
    if (vetorA[i] %2 != 0) {
        vetorB[impares] = vetorA[i];
        impares++;
    }
   }
   if (impares == 0) {
    printf("Nao ah numeros impares no vetor A\n");
   }
   for (int j = 0; j < 10; j++) {
    if (vetorA[j] %2 == 0) {
        vetorB[impares] = vetorA[j];
        impares++;
        pares++;
    }
   }
   if (pares == 0) {
    printf("Nao ah numeros pares no vetor A\n");
   }
    for (int k = 0; k < 10; k++) {
     printf("%d ", vetorA[k]);
    }
    printf("\n");
    for (int l = 0; l < 10; l++) {
     printf("%d ", vetorB[l]);
    }
}

