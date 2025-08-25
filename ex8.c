#include <stdio.h>
#include <math.h>

int main() {

    int N, i, primo;
    unsigned long long j, numero;
    
    //Lendo e Garantindo o valor de N
    scanf("%d", &N);
    if (N < 1 || N > 100){
        return 0;
    }

    unsigned long long numeros[N];

    for (i = 0 ; i < N ; i ++){
        scanf("%llu", &numeros[i]);
    }

    for (i = 0; i < N; i++){
        numero = numeros[i];

        if (numero == 1) { //numero 1
            printf("composto\n");
            continue;
        }
        if (numero == 2 || numero == 3) { //numeros 2 e 3
            printf("primo\n");
            continue;
        }
        if (numero % 2 == 0 || numero % 3 == 0){ //multiplos de 2 e 3
            printf("composto\n");
            continue;
        }
        primo = 1; //Usando como booleano
        for (j = 5 ; j * j <= numero ; j++){
            if (numero % j == 0){
                primo = 0;
                break;
            }
        }

        if (primo){
            printf("primo\n");
        }else{
            printf("composto\n");
        }
    }

    return 0;
}
