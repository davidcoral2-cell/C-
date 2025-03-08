#include <iostream>
using namespace std;

int main(){

    char a[20]; 
    char b[30]; 
    cout << "Como te llamas? "; 
    cin >> a; 
    cout << "Y tu apellido? "; 
    cin >> b; 
    cout << "Hola " << a << ", " << b;
    return 0;
}