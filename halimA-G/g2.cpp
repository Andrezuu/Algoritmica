#include <bits/stdc++.h>
#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
using namespace std;

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        string resp;
        cin>>resp;
        //char respChar[resp.length()];

        int suma = 0;
        int count = 0;
        for(int i = 0; i<resp.length(); i++){
            if(resp[i] == 'O'){
                count++;
            } else {
                count = 0;
            }
            suma+=count;
        }
        cout<<suma<<endl;

    }
}