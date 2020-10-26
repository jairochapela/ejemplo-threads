#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <mutex>

#define N 10

std::mutex m;

void cuenta_atras(std::string nombre) {
    for (int contador = N; contador >= 0; contador--)
    {
        m.lock();
        std::cout << "Cuenta atras " << nombre << ": " << contador  << std::endl;
        std::cout.flush();
        m.unlock();
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}


int main(int, char**) {
    std::thread t1(cuenta_atras, "alpha");
    std::thread t2(cuenta_atras, "bravo");

    t1.join();
    t2.join();
}
