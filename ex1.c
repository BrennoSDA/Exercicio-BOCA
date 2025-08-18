#include <stdio.h>

int bissexto (int ano){
    return (ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0);
}

int contarBissexto(int inicio, int fim){
    int contar = 0;
    int i;
    for (i = inicio; i <= fim; i++){
        if (bissexto(i)) contar++;
    }
        return contar;
}


int main(){

    int ano, bissexto, resultado, soma, novoAno, r;
    int ultimoAno = 1986;

    scanf("%d", &ano);

    resultado = ano - ultimoAno;

    r = ((resultado % 76)+ 76) % 76;
    soma = (76 - r) % 76;

    if (soma == 0) soma =76;

    novoAno = ano + soma;

   if (ano > ultimoAno){
    bissexto = contarBissexto(ultimoAno, ano);
    novoAno += bissexto/365;
   }else{
    bissexto = contarBissexto(ano, ultimoAno);
    novoAno = novoAno - (bissexto/365);
   }

    printf ("%d\n", novoAno);
}


