#include <iostream>
#include <Windows.h>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    float peso_planeta;
    int opcao = 0;
    
    cout << "Informe o seu peso (kg): ";
    cin  >> peso_planeta;

    cout << "Escolha um planeta pelo número:\n";
    cout << "1 - Mercúrio\n";
    cout << "2 - Vênus\n";
    cout << "3 - Marte\n";
    cout << "4 - Júpiter\n";
    cout << "5 - Saturno\n";
    cout << "6 - Urano\n";
    cout << "Sua opção: ";
    cin  >> opcao;

    switch(opcao)
    {
        peso_planeta /= 10;
        
        case 1:
            peso_planeta *= 0.37;
            break;
        case 2:
            peso_planeta *= 0.88;
            break;
        case 3:
            peso_planeta *= 0.38;
            break;
        case 4:
            peso_planeta *= 2.64;
            break;
        case 5:
            peso_planeta *= 1.15;
            break;
        case 6:
            peso_planeta *= 1.17;
            break;
        default:
            break;
    }

    cout << "O seu peso no planeta escolhido é " << peso_planeta << " kg(s)." << endl;

    return 0;
}
