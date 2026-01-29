#include <stdio.h>
#include "equacoes.h"
#include <stdlib.h>
int main(int argc, char *argv[])
{
    double deviation = desvio(0.2);
    printf("Sensibilidade = %.g\n", deviation);
    /* .g formata a saída de dados para retirar os zeros à direita depois da algorismo significativo. 
        Em C é impossível formatar um double diretamente na função*/ 
    
    double mean = valor_medio(3);
    printf("Média aritmética: %lf\n", mean);
    
    double std = desvio_padrao(5, 4);
    printf("Desvia Padrão: %lf\n", std);
    
    double ep = erro_percentual(10, 10.2);
    double er = erro_relativo(10, 10.2);
    
    system("pause");
    
    return 0;
}
