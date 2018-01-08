#include <bits/stdc++.h>
using namespace std;
int main (){
    int n, l;
    cin >>n>>l;;
    int m[n+2], s[n+2];
    for (int i=0; i<n;i++){
        cout << " Ves "<<i<<" - ogo = ";
        cin >> m[i];
        cout << endl;
        cout << " stoimost' = ";
        cin >>s[i];
        cout << endl;
    }
    int f[n+2][l+2];
    for (int i=0;i<=n+1;i++){

        for (int j=0;j<=l+1;j++){
            f[i][j]=0;
        }

    }
    for (int i=1; i<=n+1; i++){

        for (int j=1; j<=l+1;j++){

            if (j>=m[i]){
                f[i][j]=max(f[i-1][j], f[i-1][l-m[i]]+s[i]);
            } else {
                f[i][l]=f[i-1][l];
            }

        }


    }
    int h=0;
    int ans[n+2];
     for (int i=1;i<=n+1;i++){
        ans[i]=-100;
    }
    for (int i = n; i>0;i--){
        if (f[i][l]!=f[i-1][l]){
            cout << i<<" ";
            l-=m[i];
            h++;
        }
    }
}
