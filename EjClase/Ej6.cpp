#include "bits/stdc++.h"


int main(){
    int a, menu();
    double suma(), resta(), multi(), potencia(), divi(), mod();
    a = menu();
    if (a == 1){
        suma();
    }
    else if (a == 2){
        resta();
    }
    else if (a == 3)
    {
        multi();
    }
    else if (a == 4)
    {
        divi();
    }
    else if (a == 5)
    {
        mod();
    }
    else if (a == 6)
    {
        potencia();
    }
    else{
        std::cout << "Entrada no válida. " << std::endl;
    }

    return 0;

}
int menu(){
    int a;
    std::cout << "Que quieres hacer (Escribe el número)?" <<std::endl<< "1. Suma" <<std::endl<< "2. Resta" 
    <<std::endl<< "3. Multiplicar" <<std::endl<< "4. Dividir" <<std::endl<< "5. Mòdul" <<std::endl<< "6. Potencia" <<std::endl   ;
    std::cin >> a;
    return a;
}
double suma(){
    double num1, num2, sum;
    std::cout << "Dime el primer número a sumar: ";
    std::cin >> num1; 
    std::cout << "Dime el segundo número a sumar: ";
    std::cin >> num2; 
    sum = num1 + num2;
    std::cout << "El resultado es: " << sum << std::endl;
    return 0;
}
double resta(){
    double num1, num2, sum;
    std::cout << "Dime el primer número a restar: ";
    std::cin >> num1; 
    std::cout << "Dime el segundo número a restar: ";
    std::cin >> num2; 
    sum = num1 - num2;
    std::cout << "El resultado es: " << sum << std::endl;
    return 0;
}
double multi(){
    double num1, num2, sum;
    std::cout << "Dime el primer número a multiplicar: ";
    std::cin >> num1; 
    std::cout << "Dime el segundo número a multiplicar: ";
    std::cin >> num2; 
    sum = num1 * num2;
    std::cout << "El resultado es: " << sum << std::endl;
    return 0;
}
double divi(){
    double num1, num2, sum;
    std::cout << "Dime el primer número a dividir: ";
    std::cin >> num1; 
    std::cout << "Dime el segundo número a dividir: ";
    std::cin >> num2; 
    sum = num1/num2;
    std::cout << "El resultado es: " << sum << std::endl;
    return 0;
}
double mod(){
    int num1, num2;
    double sum;
    std::cout << "Dime el primer número a hacer el módulo:";
    std::cin >> num1; 
    std::cout << "Dime el segundo número a hacer el módulo: ";
    std::cin >> num2; 
    sum = num1 % num2;
    std::cout << "El resultado es: " << sum << std::endl;
    return 0;
}
double potencia(){
    double num1, num2, sum;
    std::cout << "Dime la base: ";
    std::cin >> num1; 
    std::cout << "Dime el exponente: ";
    std::cin >> num2;
    sum = num1;
    for (int i = 1; i < num2; i++){
        sum *= num1;
    } 
    std::cout << "El resultado es: " << sum <<std::endl;
    return 0;
}
