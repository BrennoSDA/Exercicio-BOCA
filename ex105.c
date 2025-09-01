#include <stdio.h>
#include <string.h>

int main(){

    int n, i, j;

    scanf("%d", &n);

    if(n < 1 || n > 20){
        return 0;
    }

    char procurar;
    char frase[500];
    int encontrado;
    for (i = 0 ; i < n; i++){
        encontrado = 0;
        scanf(" %c %[^\n]", &procurar, frase);

        for (j = 0; j < strlen(frase) ; j++){
            if (procurar == frase[j]){
                printf("Caractere %c encontrado no indice %d da string\n", procurar, j);
                encontrado = 1;
                break;
            }
        }
        if (encontrado == 0){
            printf("Caractere %c nao encontrado\n", procurar);
        }
    }
    return 0;
}
