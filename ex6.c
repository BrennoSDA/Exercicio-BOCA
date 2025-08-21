#include <stdio.h>
#include <math.h>

int main() {

    int N, K, i, j;
    int tipo;

    //Lendo os Valores
    scanf("%d %d", &N, &K);

    int rotulos[N], tipos[K+1];

    //Vetor para os tipos de rótulos
    for (i = 0; i <= K ; i++){
        tipos[i] = 0;
    }

    //Vai ler cada entrada e armazenar no seu respectivo tipo
     for (i = 0; i < N; i++) {
        scanf("%d", &tipo);
        tipos[tipo]++;
    }

    //Verificando qual número é menor
    int Envelopes = tipos[1];
    for (i = 2; i <= K; i++) {
        if (tipos[i] < Envelopes) {
            Envelopes = tipos[i];
        }
    }

    printf("%d", Envelopes);
    return 0;
}
