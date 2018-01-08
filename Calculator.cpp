#include <bits/stdc++.h>
using namespace std;
int main (){
	int n, a, b, c;
	cin >> n;
	int d[n];
	d[1]=0;
	d[2]=1;
	d[3]=1;
	for(int i=4; i<=n;i++){
        if (i%3==0) a=d[i/3]+1;
        else a=10000;
        if (i%2==0) b=d[i/2]+1;
        else b=10000;
        c=d[i-1]+1;
        d[i]=min(a, min(b, c));
	}
	cout << d[n];
}
