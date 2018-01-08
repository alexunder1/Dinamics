#include <bits/stdc++.h>
using namespace std;
int main (){
    int a, b, c;

    cin >> a>>b;
    int f[b+1][a+1];
    for (int i=1; i<=b; i++ ) f[1][i]=1;

    for (int i=1; i<=a; i++ ) f[i][1]=1;

    for (int i=2; i<=b+1;i++){
        for (int j=2; j<=a+1;j++){
            f[i][j]=f[i-1][j-1]+f[i-1][j]+f[i][j-1];
        }
    }

    for (int i=1; i<=b;i++){
        for (int j=1; j<=a;j++){
            cout << f[i][j]<<"  ";
        }
        cout << endl;
    }
    cout << f[b][a];
}
