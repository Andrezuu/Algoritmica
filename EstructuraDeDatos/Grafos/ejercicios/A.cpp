#include <bits/stdc++.h>
#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
using namespace std;

int main() {
    input;
    int n, h;
    int flechas = 0;
    cin>>n;
    vector<int> array(n+10, 0);
    
    for(int i = 0; i<n; i++){
        cin>>h;
        array[h]++;
        if(array[h+1]>0){
            array[h+1]--;
        } else {
            flechas++;
        }
    }
    cout<<flechas<<endl;
}