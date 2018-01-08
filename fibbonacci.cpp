#include <bits/stdc++.h>
using namespace std;
int main (){
    long long n, a, b, c;
    cin >>n;
    a=1;
    b=1;
    c=1;
    for (int i=2;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    cout  << c;
    return 0;
}
