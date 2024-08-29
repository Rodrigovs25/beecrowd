#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    double nota1=0, nota2=0;
    
    cin >> nota1;
    cin >> nota2;
    
    double nota_final = nota1 * 3.5 + nota2 * 7.5;
    
    nota_final = nota_final/11.0;

    cout << fixed << setprecision(5);
    
    cout << "MEDIA = " << nota_final << endl;
 
    return 0;
}