#include <stdio.h>

int main() {
    int P, S;
    int pos, i, comeco, pulo;

    scanf("%d %d", &P, &S);

    if (P < 1 || P > 50 || S < 1 || S > 100) {
        return 0;
    }

    //Vetor para as pedras
    int pedras[P]; 
    for (i = 1; i < P; i++) {
        pedras[i] = 0;
    }

    //Pedras ocupadas
    for (i = 0; i < S; i++) {
        scanf("%d %d", &comeco, &pulo);

        // Marcar pedra inicial
        if (comeco >= 1 && comeco <= P) {
            pedras[comeco] = 1;
        }

        // Para frente
        for (pos = comeco + pulo; pos <= P; pos = pos + pulo) {
            pedras[pos] = 1;
        }

        // Para trás
        for (pos = comeco - pulo; pos >= 1; pos = pos - pulo) {
            pedras[pos] = 1;
        }
    }

    //Falando quais foram ocupadas
    for (i = 1; i <= P; i++) {
        printf("%d\n", pedras[i]);
    }

    return 0;
}
