#include <bits/stdc++.h>
using namespace std;
int main (){
    setlocale(0, "");
	int n, a, b, c;
	cin >> n;
	vector <bool> d(n, false);
	d[1]=true;
	d[2]=true;
	d[4]=true;
	d[3]=false;

	for(int i=5; i<=n;i++){
        if (d[i-1]==false || d[i-2]==false || d[i-4]==false)    d[i]=true;
	}

    if (d[n]==true){
        cout << "Я первый "<<endl;

        cout << endl;
	} else {
        cout << "Ты первый "<<endl;

        cout << endl;
	}
	if (d[n]==true){

        if (d[n-1]==false) {
                cout << "Я вставляю купюру стоимостью "<< 1 << "  "<< " И остается "<<n-1<<endl;
                n--;

            } else if (d[n-2]==false && n>1){
                cout << "Я вставляю купюру стоимостью "<< 2<< "  "<< " И остается "<<n-2<<endl;
                n-=2;

            } else if (d[n-4]==false && n>3){
                cout << "Я вставляю купюру стоимостью "<< 4 << "  "<< " И остается "<<n-4<<endl;
                n-=4;
            }

    }
        while (n!=0){

            cout << " бабки на бочку, 1, 2 или 4? "<<endl;

            cout << endl;
            cin >> a;
            if (a<1 || a==3 || a>4 || a>n){
                cout <<" ТЫ ШО, БАНДИТ, А НУ-КА УХАДИ "<<endl;
                return 0;
            }

            n=n-a;
            cout <<"Остается "<<n<<"  "<<endl;

            if (d[n-1]==false) {
                cout << "Я вставляю купюру стоимостью "<< 1 << "  "<< " И остается "<<n-1<<endl;
                n--;

            } else if (d[n-2]==false && n>1){
                cout << "Я вставляю купюру стоимостью "<< 2<< "  "<< " И остается "<<n-2<<endl;
                n-=2;

            } else if (d[n-4]==false && n>3){
                cout << "Я вставляю купюру стоимостью "<< 4 << "  "<< " И остается "<<n-4<<endl;
                n-=4;
            }

        }


    cout << endl;
    cout << "мороженое мое";
    return 0;

}
