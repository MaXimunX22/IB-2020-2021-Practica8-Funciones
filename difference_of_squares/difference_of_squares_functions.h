/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Edgar Joel Martín Melián
 */
#include <iostream>

const std::string kHelpText = "Este programa solicita un número natural, N e imprime en pantalla la diferencia entre el cuadrado de la\
 suma de los primeros N números naturales y la suma de los cuadrados de esos mismos números";

void Usage(int argc, char *argv[]);

int SquareSum(int n);

int SumSquares(int n);