#include <bits/stdc++.h>
using namespace std;
int main (){
	int n, a;
	cin >> n;
	int p[n];
	for (int i=0; i<n;i++){
        cout << "Number: "<<i<<" = "<<endl;
        cin >> p[i];
	}
	long long  c[n], k, d[n], num[n];

	for (int i=0; i<n; i++){
        d[i]=-1000000;
        c[i]=1;
        k=0;
        num[i]=i;
	}





    int g=0;
	for(int i=0; i<n;i++){
        for(int j=i+1; j<n;j++){

            if (p[j]>p[i] && c[i]==c[j]){

                c[j]++;

            }

            if (c[j]>k){
                k=c[j];
                g=j;

            }
        }
    }

     for (int i = 0; i < n; i++) {
        for (int j = i; j > 0; j--) {
            if (c[j-1] > c[j]) {
                swap(c[j-1], c[j]);
                swap(num[j-1], num[j]);
            }
        }
    }

    for (int i=0; i<n;i++)
        if (i<n/2){
            swap(c[i], c[n-1-i]);
            swap(num[i], num[n-1-i]);
        }


    int ans[k];
    int j=0;
    for (int i=0; i<k;i++) ans[i]=-1000;
    int t=0, b=1;
    ans[0]=p[g];
	for (int o=0; o<=n;o++){


        for (int i=j+1;i<=n;i++){
            if (num[i]<num[j] && c[i] == c[j]-1 && p[num[i]]<p[num[j]]){
                ans[b]=p[num[i]];
                b++;
                j=i;
                break;
            }
        }

        cout<<endl;
        if (b==k) break;
	}

    for (int i=k-1; i>=0;i--) cout << ans[i]<<"   ";
}
