#ifndef EQUACOES_H
#define EQUACOES_H

double desvio(const double menor_divisao);

double valor_medio(const int n_elementos);

double desvio_padrao(const double media, const int n_elementos);

double erro_relativo(const double valor_medido, const double valor_referencia);

double erro_percentual(const double valor_medido, const double valor_referencia);

#endif