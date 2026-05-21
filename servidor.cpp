#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <thread>

struct Vehiculo {
    int celda;
    string hora

}

#pragma comment(lib, "lws2_32.lib")

using namespace std;

struct Vehiculo {
    int celda;
    string hora;
};

map<string, Vehiculo> parqueadero;

string obtenerHora() {

    time_t now = time(0);

    tm* ltm = localtime(&now);

    char hora[20];

    sprintf(hora, "%02d:%02d:%02d",
            ltm->tm_hour,
            ltm->tm_min,
            ltm->tm_sec);

    return string(hora);
}
