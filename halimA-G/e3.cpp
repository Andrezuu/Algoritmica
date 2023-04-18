#include <bits/stdc++.h>
#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
using namespace std;

int main()
{
 //   input;
    int tc, k;
    cin >> tc;
    int c = 0;

    while (tc--){
        scanf("%d", &k);
        int max = 0;
        while(k--){
            int s;
            scanf("%d", &s);
            if(s>max){
                max = s;
            }
        }
        printf("Case %d: %d\n", ++c, max);
    }

    return 0;
}
