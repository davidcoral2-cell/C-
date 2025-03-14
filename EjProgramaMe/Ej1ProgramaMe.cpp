#include "bits/stdc++.h"

int main(){
    int a = 0;
    std::cin >> a;
    for(int i = 0; i<a; i++){

        std::string palabra;
        std::cin >> palabra;

        for (int j = 0; j < palabra.length(); j++) {
            palabra[j] = std::tolower(palabra[j]);
        }

        if (palabra == "colgadas"){
            std::cout << "Bien"<< std::endl;
        }
        else if (palabra == "colgantes")
        {
            std::cout << "Mal"<<std::endl;
        }
    }
        return 0;
}