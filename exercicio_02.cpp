#include <iostream>
#include <Windows.h>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    float salario_bruto, prestacao;

    cout << "Informe o seu salário bruto: R$ ";
    cin  >> salario_bruto;

    cout << "Informe o valor da prestação: R$ ";
    cin  >> prestacao;

    if (prestacao <= 0.3 * salario_bruto)
    {
        cout << "Tudo certo, o empréstimo pode ser concedido!" << endl;
    }
    else
    {
        cout << "Valor de prestacao muito alto, o empréstimo não pode ser concedido!" << endl;
    }

    return 0;
}
