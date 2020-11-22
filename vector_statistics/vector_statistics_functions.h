/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Edgar Joel Martín Melián
 */
#include <iostream>

const std::string kHelpText = "Este programa solicita tres números naturales N, M y P en la que N es la cantidad de valores que necesitas y M y P\
son el rango [M,P] del cual se generará aleatoriamente los valores. El programa calculará e imprimirá: la media, la desviación estándar, el valor máximo\
y el valor mínimo.";
void Usage(int argc, char *argv[]);
double Media(double suma_total, int n);
double SumDesviacion (double valor, double media);
double Desviacion(double suma_total, double media);
double Maximo(double max, double vector);
double Minimo(double min, double vector);