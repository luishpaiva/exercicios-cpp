#include <iostream>
#include <Windows.h>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    float salario;

    cout << "Informe o seu salário: R$ ";
    cin  >> salario;

    if (salario > 2000)
    {
        cout << "O seu desconto do INSS é igual a 30%." << endl;
    }
    else if (salario > 1200)
    {
        cout << "O seu desconto do INSS é igual a 25%." << endl;
    }
    else if (salario > 600)
    {
        cout << "O seu desconto do INSS é igual a 20%." << endl;
    }
    else
    {
        cout << "Você possui isenção do pagamento de INSS." << endl;
    }

    return 0;
}
