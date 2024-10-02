//1171
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n=0, numero=0, i=0;
    int vetor[2001] = {0};

    cin >> n;

    while(n > 0){
        cin >> numero;
        vetor[numero]++;
        n--;
    }

    for(i=0; i<2001; i++){
        if(vetor[i] > 0){
            cout << i << " aparece " << vetor[i] << " vez(es)" << endl;
        }
    }

    return 0;
}
