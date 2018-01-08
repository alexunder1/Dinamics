#include <bits/stdc++.h>
using namespace std;
int main (){
    long long n, k, b[100][100];
    cin >>n>>k;
    b[0][0]=1;
    b[1][0]=1;
    b[1][1]=1;
    for (int i=2; i<=n; i++){
        for (int j=0; j<=i; j++){
        b[i][j]=b[i-1][j-1]+b[i-1][j];
        }
    }
    cout << b[n][k];
    return 0;
}
