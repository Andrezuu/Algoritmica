#include <bits/stdc++.h>
#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
using namespace std;

int main() {
    input;
    int t, n, d, counter;
    cin>>t>>n;
    while(t--){
        list<int>lista (n, 0);
        for(int i = 0; i<n; i++){
            cin>>d;
            lista.push_front(d);
        }
        for(int i = 1; i<n-1;i++){
            for(int j = i+1; j<n;j++){
                if(lista.){
                    cout<<"YES";
                    counter = 1;
                    break;
                }
            }
            if(counter == 0){
                cout<<"NO"<<endl;
            }
            counter = 0;
        }
    }

    for(int i =0; i<10; i++){
        for(int j = 0; j<10; j++){
            cout<<"["<<grafo[i][j]<<"]";
        }
        cout<<endl;
    }
    return 0;
}