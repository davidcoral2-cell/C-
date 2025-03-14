#include "bits/stdc++.h"

int diferencia1(int num1, int num2, int diferencia){
    diferencia = num1 - num2;
    return diferencia;
}
int diferencia2(int num1, int num2, int diferencia){
    diferencia = num2 - num1;
    return diferencia;
}
int main(){

    int campanas,num1,num2,diferencia = 0;
    int diferencia1(int num1, int num2, int diferencia), diferencia2(int num1, int num2, int diferencia);

    while (true){
        std::cin >> campanas;
        if(campanas <= 0){
            return 0;
        }

        else{
            int diferencia = 0;
            for(int i = 0; i < campanas; i++){

                std::cin >> num1 >> num2;

                if(num1 >= num2){
                    diferencia = diferencia1(num1,num2,diferencia) + diferencia;
                }
                else{
                    diferencia = diferencia2(num1,num2,diferencia) + diferencia;
                }
            }
            std::cout << diferencia<< std::endl;
        }
    }
    return 0;
}