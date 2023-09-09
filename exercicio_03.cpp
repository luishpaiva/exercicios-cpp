#include <iostream>
#include <Windows.h>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int numero, maior, menor;

    for (int i = 1; i <= 4; i++)
    {
        cout << "Informe o " << i << "º número inteiro: ";
        cin >> numero;

        if (i == 1)
        {
            maior = numero;
            menor = numero;
        }

        if (numero > maior)
        {
            maior = numero;
        }

        if (numero < menor)
        {
            menor = numero;
        }
    }

    cout << "O maior número informado é " << maior << " e o menor número é " << menor << "." << endl;

    return 0;
}
