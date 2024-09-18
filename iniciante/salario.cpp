//1009

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    char str[10];
    float salario=0, comissao=0, total;

    cin >> str >> salario >> comissao;

    total = salario + comissao * 0.15;

    cout << "TOTAL = R$ " << fixed << setprecision(2) << total << endl;

    return 0;
}
