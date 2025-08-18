#include <stdio.h>
#include <math.h>

int main() {

    int tam, i, unidadeMilhar, centena, dezena, unidade;

    
    scanf("%d", &tam);

    int numeros[tam];

    if (tam >= 1){
    
        for (i = 0 ; i < tam; i++){
            scanf("%d", &numeros[i]);
        }

    }else{}

    for (i = 0 ; i < tam; i++){
        unidadeMilhar = numeros[i] / 1000;
        centena = (numeros[i]%1000) / 100;
        dezena = (numeros[i]%100) / 10;
        unidade = numeros[i]%10;

        if (unidadeMilhar != 0){
            if ( unidadeMilhar == unidade && centena == dezena)
            {
                printf ("yes ");
            }else{
                printf("no ");
            } 
        }else if (centena != 0)
        {
           if (unidade == centena){
            printf ("yes ");
           }else{
            printf("no ");
           }
        }else{
            if (unidade == dezena){
                printf("yes ");
            }else{
                printf("no ");
            }
        }
        
    }
    return 0;
}
