#include <stdio.h>
#include <math.h>

// Função para trocar cada resto por sua letra
char trocarNumero(int resto) {
    if (resto == 0) return 'A';
    if (resto == 1) return 'C';
    if (resto == 2) return 'G';
    return 'T'; 
}

int main() {
    int N, j, i;
    
    scanf("%d", &N);

    if ( N <= 0 || N > 100) {
        return 0;
    }
    
    int vetor[N];
    
    // Criando e armazenando o vetor
    for (i = 0; i < N; i++) {
        scanf("%d", &vetor[i]);
    }
    
    //Lendo cada número, dividindo por 4 3 guardando o resto
    for (i = 0 ; i < N ; i++) {
        int numero = vetor[i];
        int restos[50];
        int quantidade = 0;

        // Caso Especial: se pudesse numero = 0
        if (numero == 0) {
            printf("A\n");
            continue;
        }

        while (numero > 0) {
            restos[quantidade++] = numero % 4;
            numero /= 4;
        }

        // Invertendo
        for (j = quantidade - 1; j >= 0; j--) {
            printf("%c", trocarNumero(restos[j]));
        }
        printf("\n");
    }

    return 0;
}
