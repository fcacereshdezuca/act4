#include <iostream>

using namespace std;
int main(){
string palabra, longacion;

cout << "Ingrese una palabra" << endl;
cin >> palabra;

if (palabra.size() == 10)
{
    longacion = "Tiene 10 caracteres";
}else{
    longacion = "Tiene menos o mas de 10 caracteres";
}


if ((palabra.size())% 2 == 0) {
    cout << "Es par y "<< longacion;
}else{
    cout << "Es impar y "<< longacion;
}

return 0;
}