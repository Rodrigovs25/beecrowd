#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a=0, b=0, quociente=0, resto=0;

    cin >> a;
    cin >> b; 

    if(a >= 0){
        quociente = a / b;
        resto = a % b;
    }  else {
        int x = 0, y = 0;
        	
        if (b < 0) x = b * -1;
        else x = b;
        	
        for (resto = 0; resto < x; resto++) {
        	y = a - resto;
        	if (y % b == 0) break;
        }

        quociente = y / b;
    }


    cout << quociente << " " << resto << endl;

    return 0;
}
