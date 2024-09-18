#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a=0, b=0, c=0, d=0, diferenca=0;

    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;

    diferenca = (a * b - c * d);

    cout << "DIFERENCA = " << diferenca << endl;

    return 0;
}
