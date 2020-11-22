/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Edgar Joel Martín Melián
 */
#include <iostream>
#include <vector>
#include <ctime>
#include <cmath>
#include "vector_statistics_functions.h"

int main(int argc, char* argv[]){
    srand48(std::time(NULL));
    std::vector<double> valores;
    double sumatorio_media{0}, sumatorio_desviacion{0};
    
    Usage(argc, argv);
    std::string n{argv[1]};
    std::string m{argv[2]};
    std::string p{argv[3]};

    const int kN = stoi(n);
    const double kM = stoi(m);
    const double kP = stoi(p);

    valores.reserve(kN);

    for(int i = 0; i < kN; i++){
        valores[i] = drand48() * (kP - kM) + kM;
        sumatorio_media += valores[i];
    }

    for(int j=0; j < kN; j++){
        sumatorio_desviacion += SumDesviacion(valores[j], Media(sumatorio_media, kN));
    }

    double max{valores[0]}, min{valores[kN-1]};
    for(int k=0; k < kN; k++){
        max= Maximo(max, valores[k]);
    }

    for(int l=0; l < kN; l++){
        min= Minimo(min, valores[l]);
    }
    

    std::cout << "La media aritmetica es: " << Media(sumatorio_media, kN) << std::endl;
    std::cout << "La desviación estándar es: " << Desviacion(sumatorio_desviacion, Media(sumatorio_media, kN)) << std::endl;
    std::cout << "El valor máximo es: " << max << std::endl;
    std::cout << "El valor mínimo es: " << min << std::endl;

}
