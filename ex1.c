#include <stdio.h>
#include <math.h>

int bissexto (int ano){
    return (ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0);
}

int contarBissexto(int inicio, int fim){
    int contar = 0;
    for (int i = inicio; i <= fim; i++){
        if (bissexto(i)) contar++;
    }
        return contar;
}


int main(){

    int ano, bissexto, resultado, soma, novoAno;
    int ultimoAno = 1986;

    scanf("%d", &ano);

    resultado = ano - ultimoAno;

    soma = 76 - (resultado%76);

    novoAno = ano + soma;

   if (ano < novoAno){
    bissexto = contarBissexto(ano, novoAno);
    novoAno += bissexto/365;
   }else{
    bissexto = contarBissexto(novoAno, ano);
    novoAno -= bissexto/365;
   }

    printf ("%d\n", novoAno);


}
