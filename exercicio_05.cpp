#include <iostream>
#include <Windows.h>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    float valor;

    cout << "Informe o valor de compra do valor: R$ ";
    cin  >> valor;

    if (valor < 20)
    {
        valor *= 1.45;
    }
    else
    {
        valor *= 1.30;
    }

    cout << "O valor de venda do valor é R$ " << valor << "." << endl;

    return 0;
}
