#include <bits/stdc++.h>
#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
using namespace std;

int main()
{
 //   input;
    int n, c = 0;
    while(scanf("%d", &n), n){
        int treat, r;
        while(n--){
            cin>>treat;
            if(treat != 0){
                r--;
            } else {
                r++;
            }
        }
        printf("Case %d: %d", ++c, r);
    }
}
