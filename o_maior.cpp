#include <iostream>

using namespace std;

int maior_dois(int a, int b){
    return ((a + b + abs(a - b)) / 2);
}

int maior_tres(int a, int b, int c){
    int numero = maior_dois(a, b);
    return maior_dois(numero, c);
}

int main(int argc, char const *argv[])
{
    int a=0, b=0, c=0;

    cin >> a;
    cin >> b;
    cin >> c;

    cout << maior_tres(a, b, c) << " eh o maior" << endl;
    
    return 0;
}
