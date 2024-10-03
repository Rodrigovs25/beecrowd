//1087
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int x1=-1, y1=-1, x2=-1, y2=-1;
    int resultado=0;

    while(cin >> x1 >> y1 >> x2 >> y2) {
        if(x1 == 0 && y1 == 0 && x2 == 0 && y2 == 0){
            break;
        }

        if(x1 == x2 && y1 == y2){
            resultado = 0;
        } else if (x1 == x2 || y1 == y2 || fabs(x1 - x2) == fabs(y1 - y2) ) {
            resultado = 1;
            
        } else {
            resultado = 2;
        }
        cout << resultado << endl;
    }


    return 0;
}
