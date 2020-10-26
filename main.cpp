#include <iostream>
#include <string>
using namespace std;

#define N 10

void cuenta_atras(string nombre) {
    for (int contador = N; contador >= 0; contador--)
    {
        cout << "Cuenta atrás " << nombre << ": " << contador  << endl;
    }
    
}


int main(int, char**) {
}
