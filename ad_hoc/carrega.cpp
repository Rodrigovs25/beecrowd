//1026
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    long int a, b;

    while(cin >> a >> b){
        cout << (a ^ b) << endl;
    }

    
    return 0;
}
/*
#include <stdio.h>

int main(){
    long long int a, b;

    while(scanf("%lld %lld", &a, &b) != EOF){
        printf("%lld\n", a ^ b);
    }

    return 0;
}
*/
