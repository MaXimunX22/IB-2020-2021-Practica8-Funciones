/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Edgar Joel Martín Melián
 */
#include <iostream>
#include <cmath>
#include <cstdlib>
#include "vector_statistics_functions.h"

void Usage(int argc, char *argv[]){
    std::string parameter = "--help";
    if (argc != 4){
        if ((argc == 2) && (argv[1] == parameter) ){
            std::cout << kHelpText << std::endl;
            exit(EXIT_SUCCESS);
        }
        if (argc != 3){
            if (argc != 2){
                std::cout << argv[0] << ": Falta tres números naturales como parámetro" << std::endl;
                std::cout << "Pruebe " << argv[0] << " --help para más información" << std::endl;
                exit(EXIT_SUCCESS);
            }
            std::cout << argv[0] << ": Falta dos números naturales como parámetro" << std::endl;
            std::cout << "Pruebe " << argv[0] << " --help para más información" << std::endl;
            exit(EXIT_SUCCESS);
        }
        std::cout << argv[0] << ": Falta un número natural como parámetro" << std::endl;
        std::cout << "Pruebe " << argv[0] << " --help para más información" << std::endl;
        exit(EXIT_SUCCESS);
    }
    
}
double Media(double suma_total, int n){
    return suma_total/n;
}
double SumDesviacion (double valor, double media){
    double resta, elevado;
    resta = valor - media;
    elevado = pow(resta, 2);

    return elevado;
}
double Desviacion(double suma_total, double media){
    return sqrt(suma_total / media);
}
double Maximo(double max, double vector){
    if(max < vector){
        return vector;
    }
    else{
        return max;
    }
}
double Minimo(double min, double vector){
    if (min >= vector){
        return vector;
    }
    else{
        return min;
    }
}