//1871
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a=0, b=0, i=0;
    int soma = 0;
    int vetor[] = {0};

    while(cin >> a >> b){
        if(a == 0 && b ==0){
            break;
        }

        soma = a + b;

        for (i = 0; i < 11; i++){
            vetor[i] = soma%10;
            soma /= 10;
        }

        for (i = 0; i < 11; i++){
            if( vetor[i] != 0){
                cout << vetor[i] << endl;
            }
        }
        cout << endl;
    }

    return 0;
}