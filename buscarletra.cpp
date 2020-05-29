#include <iostream>

using namespace std;
int main(){
string palabra;

cout << "Ingrese una palabra" << endl;
cin >> palabra;

if (palabra.front() == palabra.back()) {
    cout << "Inicia y termina con la misma letra";
}else{
    cout << "Son diferentes letras";
}

return 0;
}