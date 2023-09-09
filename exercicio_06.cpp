#include <iostream>
#include <Windows.h>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int idade;

    cout << "Informe a sua idade: ";
    cin  >> idade;

    if (idade > 65)
    {
        cout << "O valor do plano de saúde é R$ 400,00." << endl;
    }
    else if (idade > 59)
    {
        cout << "O valor do plano de saúde é R$ 250,00." << endl;
    }
    else if (idade > 45)
    {
        cout << "O valor do plano de saúde é R$ 150,00." << endl;
    }
    else if (idade > 29)
    {
        cout << "O valor do plano de saúde é R$ 120,00." << endl;
    }
    else if (idade > 10)
    {
        cout << "O valor do plano de saúde é R$ 60,00." << endl;
    }
    else
    {
        cout << "O valor do plano de saúde é R$ 30,00." << endl;
    }

    return 0;
}
