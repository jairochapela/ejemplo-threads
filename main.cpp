#include <iostream>
#include <string>
#include <thread>
#include <chrono>

#define N 10

void cuenta_atras(std::string nombre) {
    for (int contador = N; contador >= 0; contador--)
    {
        std::cout << "Cuenta atras " << nombre << ": " << contador  << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    
}


int main(int, char**) {
    cuenta_atras("prueba");
}
