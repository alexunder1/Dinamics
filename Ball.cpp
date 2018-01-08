#include <bits/stdc++.h>
using namespace std;
int main (){
    long long n, a, b, c, d;
    cin >>n;
    a=1;
    b=2;
    c=4;
    for (int i=4;i<=n;i++){
        d=a+b+c;
        a=b;
        b=c;
        c=d;
    }
    if (n==1)   cout << 1;
    else if (n==2) cout << 2;
    else if (n==3) cout << 4;
    else  cout  << d;
    return 0;
}
