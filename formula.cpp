//1036

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    double a=0, b=0, c=0, delta=0, raiz1=0, raiz2=0;

    cin >> a >> b >> c;
    delta = b * b - 4 * a * c;

    if (delta > -1 && a != 0) {
        raiz1 = (- b + sqrt(delta) ) / (2 * a);
        raiz2 = (- b - sqrt(delta) ) / (2 * a);
        cout << "R1 = " << fixed << setprecision(5) << raiz1 << endl;
        cout << "R2 = " << fixed << setprecision(5) << raiz2 << endl;
    } else {
        cout << "Impossivel calcular" << endl;
    }

    return 0;
}
