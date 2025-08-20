#include <stdio.h>

int main() {

    float a, r, areaCirculo, areaLateral, total, custo = 100.0, pi = 3.14159;

    scanf("%f", &r);
    scanf("%f", &a);

    areaCirculo = (r * r) * pi;
    areaLateral = (2 * pi * r) * a;

    total = (2 * areaCirculo + areaLateral) * custo;

    printf("O VALOR DO CUSTO E = %.2f\n", total);

    return 0;
}
