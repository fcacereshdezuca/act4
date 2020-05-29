#include <iostream>

using namespace std;
int main(){
int numero;

cout << "Ingrese un numero" << endl;
cin >> numero;

if (numero > 0){
    cout << "Es positivo";
}else if(numero < 0){
    cout << "Es negativo";
}else if(numero == 0){
    cout << "Es cero";
}

return 0;
}