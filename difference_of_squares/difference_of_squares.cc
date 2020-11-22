/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Edgar Joel Martín Melián
 */
#include <iostream>
#include "difference_of_squares_functions.h"

int main(int argc, char* argv[]){
    Usage(argc, argv);
    std::string number{argv[1]};
    
    const int kNumber = stoi(number);

    std::cout << SquareSum(kNumber) - SumSquares(kNumber) << std::endl;
}