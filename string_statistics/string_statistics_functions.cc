/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Edgar Joel Martín Melián
 */
#include <iostream>
#include <algorithm>
#include "string_statistics_functions.h"

bool Abracadabra(std::string cadena){
    int buscar = cadena.find("abracadabra");
    if(buscar>0){
        return true;
    }
    else{
        return false;
    }


}

