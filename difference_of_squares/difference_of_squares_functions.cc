/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Edgar Joel Martín Melián
 */
#include <iostream>
#include <cstdlib>
#include <cmath>
#include "difference_of_squares_functions.h"

void Usage(int argc, char *argv[]){
    if (argc != 2){
        std::cout << argv[0] << ": Falta un número natural como parámetro" << std::endl;
        std::cout << "Pruebe " << argv[0] << " --help para más información" << std::endl;
        exit(EXIT_SUCCESS);
    }
    std::string parameter{argv[1]};
    if (parameter == "--help"){
        std::cout << kHelpText << std::endl;
        exit(EXIT_SUCCESS);
    }
}

int SquareSum(int n){
    int sum{0};
    for(int i=1; i <= n; i++){
        sum += i;
    }
    
    return pow(sum, 2);
}

int SumSquares(int n){
    int sum{0};
    int square;
    for(int i=1; i <= n; i++){
        square= pow(i,2);
        sum += square;
    }

    return sum;
}