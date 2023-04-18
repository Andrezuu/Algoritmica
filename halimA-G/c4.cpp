#include <bits/stdc++.h> 
#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
using namespace std;

int main(){
//    input;
    int n,m;
    scanf("%d %d", &n, &m);
    int r = m-n;
    string s;
    if(r>=0){
        s = "pieces";
        if(r==1){
            s = "piece";
        }
        printf("Dr. Chaz will have %d %s of chicken left over!\n", r, s.c_str());
    } else {
        s = "pieces";
        if(abs(r)==1){
            s = "piece";
        }
        printf("Dr. Chaz needs %d more %s of chicken!\n", abs(r), s.c_str());
    }
    
    return 0; 
}

