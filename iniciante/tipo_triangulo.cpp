#include <iostream>

using namespace std;

void swap(double *a, double *b){
    double aux = *a;
    *a = *b;
    *b = aux;
}

int main(int argc, char const *argv[])
{
    double a=0, b=0, c=0, aux=0;
    cin >> a >> b >> c;

    if(b > a){
        swap(&a, &b);
    }
    if(c > b){
        swap(&b, &c);
        if(b > a) {
            swap(&a, &b);
        }
    }

    if (a >= (b+c)) {
        cout << "NAO FORMA TRIANGULO" << endl;
    } else {
        if ( a*a == b*b + c*c) {
            cout << "TRIANGULO RETANGULO" << endl;
        } else if ( a * a > b * b + c * c) {
            cout << "TRIANGULO OBTUSANGULO" << endl;
        } else if ( a * a < b * b + c* c) {
            cout << "TRIANGULO ACUTANGULO" << endl;
        }

        if ( a == b &&  b == c){
            cout << "TRIANGULO EQUILATERO" << endl;
        } else if (a == b || b == c || a == c) {
            cout << "TRIANGULO ISOSCELES" << endl;
        }
    }


    return 0;
}
