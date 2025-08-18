#include <stdio.h>
#include <math.h>

int main() {

    int N, N1, N2, resultado;
    char operador;

    scanf("%d", &N);

    scanf ("%d %c %d", &N1, &operador, &N2);

       if (operador == '+'){
        resultado = N1 + N2;
            if (resultado > N){
                printf("overflow");
            }else{
                printf("no overflow");
            }
       }else if (operador == 'x'){
        resultado = N1 * N2;
             if (resultado > N){
                printf("overflow");
            }else{
                printf("no overflow");
            }
       }
           
    return 0;
}
