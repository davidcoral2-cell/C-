#include "bits/stdc++.h"

std::string edades(int edad);

int main(){

    int edad;
    std::cout << "Dime tu edad: "; std::cin >> edad;

    std::string mayoria = edades(edad);

    std::cout << "Tu eres: " << mayoria << std::endl; 
    return 0;
}

std::string edades(int edad){

    if (edad > 18) {
        return "Mayor de edad";
    }
    else if (edad < 18)
    {
        return "Eres menor";
    }
    else {
        return "Tienes 18 años";
    }
}