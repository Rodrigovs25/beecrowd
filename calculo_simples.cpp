#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    int codigo1=0, codigo2=0, num1=0, num2=0;
    float valor1=0, valor2=0;

    cin >> codigo1 >> num1 >> valor1;
    cin >> codigo2 >> num2 >> valor2;

    float total = num1 * valor1 + num2 * valor2;

    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << total << endl;
    return 0;
}