#include "bits/stdc++.h"
using namespace std;


int main() {


/*enum dias {dilluns, dimarts, dimecres, dijous, divendres, sabado, diucomer};
for (int d = dilluns; d <= diucomer; d++) cout << d;*/

    // int nombres[5] = {8,2,3,4,5};
    // int suma = 1;
    // for(int i = 0; i < 4; i++) {
    //     if(nombres[i]%2 == 0){
    //     suma *= nombres[i];
    //     cout << "Element " << i+1 << ": " << nombres[i+1]<<endl;
    //     }
    // }
    // cout << "la multi de todo es igual a: "<<suma<<endl;
    // return 0;


//     int nombres[5][2];
//     for (int i = 0; i < 5; i++) {
//         for (int j = 0; j<2; j++){
//         cin >> nombres[i][j];
//         }
//     }
//     for (int i = 0; i < 5; i++) {
//         for (int j = 0; j<2; j++){
//             cout << "L'array de la fila " << i << " i la columna "<< j << " val: "<< nombres[i][j] << endl;
//     }
// }

int n1[2][2], n2[2][2], res[2][2];
int i,j;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j<2; j++){
        cin >> n1[i][j];
        }
    }
    cout << "Cambio de matriz";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j<2; j++){
        cin >> n2[i][j];
        }
    }


    for (int i = 0; i < 2; i++) {
        for (int j = 0; j<2; j++){
            res[i][j] = n1[i][j] + n2[i][j];
            cout << "La suma de las matrices de la fila "<< i << " y columna " << j << " es igual a: " << res[i][j] << endl;
        }
    }
    return 0;
}