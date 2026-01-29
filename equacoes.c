#include "equacoes.h"
#include <string.h>
#include <stdio.h>
#include <math.h>

void limpar_buffer(void){
    int c;
    while((c=getchar())!= '\n' && c != EOF);
}

double desvio(const double menor_divisao){
    return menor_divisao/2;
}

double valor_medio(const int n_elementos){
    double n;
    int i = 1;
    double contador = 0;
    while(i<=n_elementos){
        printf("Digite o valor de n%i: ", i);
        fflush(stdout);
        scanf("%lf", &n);
        limpar_buffer();
        contador += n;
        i++;
    }
    return contador/n_elementos;
}

double desvio_padrao(const double media, const int n_elementos){
    double n;
    int i = 1;
    double contador = 0;
    while(i<=n_elementos){
        printf("Digite o valor de n%i: ", i);
        fflush(stdout);
        scanf("%lf", &n);
        limpar_buffer();
        contador += pow((n-media), 2);
        i++;
    }
    return sqrt(contador/(n_elementos-1));
}

double erro_relativo(const double valor_medido, const double valor_referencia){
    return fabs((valor_medido-valor_referencia)/valor_referencia);
}

double erro_percentual(const double valor_medido, const double valor_referencia){
    return fabs(((valor_medido-valor_referencia)/valor_referencia)*100);
}



