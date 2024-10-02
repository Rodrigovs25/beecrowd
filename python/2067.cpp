#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, m, q;
    int grid[205][205];
    int dp[205][205];
    int maior=0;
    memset(dp, 0, sizeof dp);

    cin >> n >> m;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> grid[i][j];
            if(grid[i][j] == 0) dp[i][j] = 0;
            else{
                dp[i][j] = min( dp[i-1][j-1],   
                                    min(dp[i-1][j], dp[i][j-1]))+1;
                maior = max(maior, dp[i][j]);
            }
        }
        
    }

    cin >> q;
    while(q--){
        int t;
        cin >> t;
        if(t <= maior) printf("yes\n");
        else printf("no\n");
    }
    

    return 0;
}
