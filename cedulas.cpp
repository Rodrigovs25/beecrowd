#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int numero=0, resultado=0;

    cin >> numero;

    cout << numero << endl;

    resultado = numero / 100;
    numero = numero % 100;
    cout << resultado << " nota(s) de R$ 100,00" << endl;

    resultado = numero / 50;
    numero = numero % 50;
    cout << resultado << " nota(s) de R$ 50,00" << endl;

    resultado = numero / 20;
    numero = numero % 20;
    cout << resultado << " nota(s) de R$ 20,00" << endl;

    resultado = numero / 10;
    numero = numero % 10;
    cout << resultado << " nota(s) de R$ 10,00" << endl;

    resultado = numero / 5;
    numero = numero % 5;
    cout << resultado << " nota(s) de R$ 5,00" << endl;

    resultado = numero / 2;
    numero = numero % 2;
    cout << resultado << " nota(s) de R$ 2,00" << endl;

    resultado = numero;
    cout << resultado << " nota(s) de R$ 1,00" << endl;

    return 0;
}
