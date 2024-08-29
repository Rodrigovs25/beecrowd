#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    float numero=0;
    int resultado=0;

    cin >> numero;

    cout << "NOTAS:" << endl;

    resultado = numero / 100;
    numero -= resultado * 100;
    cout << resultado << " nota(s) de R$ 100.00" << endl;

    resultado = numero / 50;
    numero -= resultado * 50;
    cout << resultado << " nota(s) de R$ 50.00" << endl;

    resultado = numero / 20;
    numero -= resultado * 20;
    cout << resultado << " nota(s) de R$ 20.00" << endl;

    resultado = numero / 10;
    numero -= resultado * 10;
    cout << resultado << " nota(s) de R$ 10.00" << endl;

    resultado = numero / 5;
    numero -= resultado * 5;
    cout << resultado << " nota(s) de R$ 5.00" << endl;

    resultado = numero / 2;
    numero -= resultado * 2;
    cout << resultado << " nota(s) de R$ 2.00" << endl;

    cout << "MOEDAS:" << endl;

    resultado = numero;
    numero -= resultado * 1;
    cout << resultado << " moeda(s) de R$ 1.00" << endl;

    resultado = numero / 0.5;
    numero -= resultado * 0.5;
    cout << resultado << " moeda(s) de R$ 0.50" << endl;

    resultado = numero / 0.25;
    numero -= resultado * 0.25;
    cout << resultado << " moeda(s) de R$ 0.25" << endl;

    resultado = numero / 0.10;
    numero -= resultado * 0.10;
    cout << resultado << " moeda(s) de R$ 0.10" << endl;

    resultado = numero / 0.05;
    numero -= resultado * 0.05;
    cout << resultado << " moeda(s) de R$ 0.05" << endl;

    resultado = round(numero / 0.01);
    cout << resultado << " moeda(s) de R$ 0.01" << endl;

    return 0;
}