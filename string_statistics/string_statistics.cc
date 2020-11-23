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
#include "string_statistics_functions.h"

int main(int argc, char* argv[]){
    const std::vector<std::string> cadenas {"Buenos días amigos", "Un mago dijo abracadabra", "Tengo hambre", "Cierran el skatepark a las 7 p.m", 
    "Hay que llevar mascarillas", "La clave secreta es abracadabra", "Fumar mata", "Se me olvido hacer la compra semanal y ahora tenemos poca comida", 
    "Tengo dos hermanos", "Miley Cyrus sacó nuevo tema con Dua Lipa" };
    
    for(int i=0; i< 10; i++){
        std::cout << "\nCadena " << i+1 << " <" << cadenas[i] << ">: " << std::endl;
        std::cout << "- Longitud: " << cadenas[i].length() << " caracteres." << std::endl;
        std::cout << "- Primer carácter: " << cadenas[i].at(0) << std::endl;
        std::cout << "- Ultimo carácter: " << cadenas[i].at(cadenas[i].length()-1) << std::endl;
        std::cout << "¿Aparece la parabra <abracadabra>? ";
        if(Abracadabra(cadenas[i]) == true){
            std::cout << "Sí" << std::endl;
        }
        else{
            std::cout << "No" << std::endl;
        }

    }

    return 0;
}