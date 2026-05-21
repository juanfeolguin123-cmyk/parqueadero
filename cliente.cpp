#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <thread>

#pragma comment(lib, "lws2_32.lib")

using namespace std;

string generarPlaca() {
    string placa = "";

    for(int i = 0; i < 3; i++)
        placa += char('A' + rand() % 26);

    for(int i = 0; i < 3; i++)
        placa += char('0' + rand() % 10);

    return placa;
}
