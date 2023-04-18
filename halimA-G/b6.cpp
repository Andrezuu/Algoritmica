#include <bits/stdc++.h> 
#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
using namespace std;

int main(){
    int n;
    float r = 0.0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        float q,y;
        scanf("%f %f", &q, &y);
        r = q*y + r;
    }
    cout<<r<<endl;
}