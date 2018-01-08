#include <bits/stdc++.h>
using namespace std;
int main (){
	int n, a, b, c;
	cin >> n;
	int p[n];
	for (int i=1; i<=n;i++){
        cout << "skol'ko stoit "<<i<<" stypen'ka?";
        cin >> p[i];
	}
	int d[n];
	d[1]=p[1];
	d[2]=p[2];
	for(int i=3; i<=n;i++){
        d[i]=min(d[i-1], d[i-2])+p[i];
	}
	cout << d[n];
}
