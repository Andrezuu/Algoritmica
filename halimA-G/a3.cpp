#include <bits/stdc++.h>
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
using namespace std; 

int main(){
    int TC;
    scanf("%d", &TC);
    while(TC--){
        long long n;
        scanf("%lld", &n);
        long long r = floor((-1+sqrt(1+8*n))/2);
        printf("%lld\n", r);
    }
    return 0;
}