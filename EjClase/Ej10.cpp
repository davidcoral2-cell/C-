#include "bits/stdc++.h"

int menu(){
    int a;
    std::cout << "Que quieres hacer (Escribe el número)?" <<std::endl<< "1. Suma" <<std::endl<< "2. Resta" 
    <<std::endl<< "3. Multiplicar" <<std::endl<< "4. Dividir" <<std::endl<< "5. Módulo" <<std::endl<< "6. Potencia"<< std::endl <<"7. Cambio de decimal a otra base"
    << std::endl << "8. Mayor de 2 números" <<std::endl << "9. Mayor de 3 números" << std::endl<< "10. Calcular longitud lista" << std::endl;
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
std::string dec2base(){
    int numdec, base;
    std::cout << "Dime el número decimal inicial: ";
    std::cin >> numdec;
    std::cout << "Dime la nueva base (2-36): ";
    std::cin >> base;
    if (base < 2 || base > 36) {
        std::cout << "Base no válida. Debe estar entre 2 y 36." << std::endl;
        return "";
    }
    if (numdec == 0) {
        std::cout << "El número es igual a 0" << std::endl;
        return "0";
    }
    std::string resultado = "";
    const char caracteres[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int numero = numdec;
    
    while (numero > 0) {
        resultado = caracteres[numero % base] + resultado;
        numero /= base;
    }  
    
    std::cout << "El número " << numdec << " en base " << base << " es igual a: " << resultado << std::endl;
    return resultado;
}
double mayor(){
    double num1, num2;
    std::cout << "Dime el número 1" <<std::endl;
    std::cin >> num1;
    std::cout << "Dime el número 2" <<std::endl;
    std::cin >> num2;
    if(num1 > num2){
        std::cout << "En número " << num1<<", es mayor a " << num2 << "." <<std::endl;
    }
    else if(num1 == num2){
        std::cout << "Los dos números son iguales.";
    }
    else{
        std::cout << "En número " << num2<<", es mayor a " << num1 << "." <<std::endl;
    }
    return 0;
}
double mayorde3(){
    double num1, num2, num3;
    std::cout << "Dime el número 1" <<std::endl;
    std::cin >> num1;
    std::cout << "Dime el número 2" <<std::endl;
    std::cin >> num2;
    std::cout << "Dime el número 3" <<std::endl;
    std::cin >> num3;
    if(num1 > num2 && num1 > num3){
        std::cout << "En número " << num1<<", es mayor a " << num2 << " y a "<< num3 <<std::endl;
    }
    else if(num1 == num2  && num1 == num3){
        std::cout << "Los dos números son iguales.";
    }
    else if (num3 > num1 && num3 > num2){
        std::cout << "En número " << num3<<", es mayor a " << num2 << " y a "<< num1 <<std::endl;
    }
    else{
        std::cout << "En número " << num2<<", es mayor a " << num1 << " y a " <<std::endl;
    }
    return 0;
}
int calclong(){
    std::string stringinicial = "GYAIOFIOAWJDJAJWFJHAHSDJIWIOGASLD";
    int longitud = stringinicial.size();
    std::cout << "Mide: "<< longitud <<std::endl;
}

int main(){
    int a, menu(),calclong();
    std::string dec2base();
    double suma(), resta(), multi(), potencia(), divi(), mod(), mayor(),mayorde3();
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
    else if (a == 7){
        dec2base();
    }
    else if(a == 8){
        mayor();
    }
    else if (a == 9)
    {
        mayorde3();
    }
    else if (a ==10 )
    {
        calclong();
    }
    
    else{
        std::cout << "Entrada no válida. " << std::endl;
    }

    return 0;
}