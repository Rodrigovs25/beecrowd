#include <iostream>

using namespace std;

int main(){
    int n, r, maria, joao;

    while(cin >> n){
        if(!n)  break;

        maria = 0, joao = 0;

        for(int i = 0; i < n; ++i){
            cin >> r;

            if(r)   ++joao;
            else    ++maria;
        }

        cout << "Mary won " << maria << " times and John won " << joao << " times" << endl;
    }

    return 0;
}