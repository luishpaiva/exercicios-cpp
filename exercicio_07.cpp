#include <iostream>
#include <Windows.h>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    float percurso, consumo;
    char tipo;

    cout << "Informe a distância do percurso (km): ";
    cin  >> percurso;
    
    cout << "Informe o tipo do veículo (A, B ou C): ";
    cin  >> tipo;

    switch (tipo)
    {
    case 'A':
        consumo = percurso / 8;
        break;
    case 'B':
        consumo = percurso / 9;
        break;
    case 'C':
        consumo = percurso / 12;
        break;
    default:
        break;
    }

    cout << "O consumo estimado para o veículo do tipo " << tipo << " é igual a " << consumo << " litros de combustível para o percurso de " << percurso << " km(s).";

    return 0;
}
