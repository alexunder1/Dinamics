#include <bits/stdc++.h>
using namespace std;
int main (){
    string a;
    cin>>a;
    int len=a.length();
    int d[len][len];
    int ans=0;
    for (int i=0; i<len; i++){
        for (int j=0; j<len; j++){
            d[i][j]=0;
        }
    }
    for (int i=0; i<len; i++) d[i][i]=1;


    for (int i=0; i<len; i++){
        for (int j=i+1; j<len; j++){
            if (a[i]==a[j]) d[i][j]=d[i+1][j-1]+2;
            else d[i][j]=max(d[i][j-1], d[i+1][j]);
            ans=max(ans, d[i][j]);
            cout << d[i][j]<<"   ";
        }
        cout << endl;
    }
    cout << endl;
    cout << ans;
}
