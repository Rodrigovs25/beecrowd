//1103
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int h1=-1, m1=-1, h2=-1, m2=-1;
    int minutos=0;

    while(cin >> h1 >> m1 >> h2 >> m2) {
        if(h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0){
            break;
        }
        if(h1 < h2){
            if(m1 <= m2){
                minutos = (h2-h1)*60 + (m2-m1);
            } else {
                minutos = (h2-h1)*60 - (m1-m2);
            }
        } else if (h1 == h2) {
            if(m1 <= m2){
                minutos = m2-m1;
            } else if(m1 > m2) {
                minutos = 24*60 - (m1-m2);
            }
        } else {
            minutos = (23-(h1-h2))*60 + (60-m1+m2);
        }
        cout << minutos << endl;
    }

    return 0;
}
