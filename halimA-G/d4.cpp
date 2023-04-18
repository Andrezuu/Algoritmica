#include <bits/stdc++.h>
#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
using namespace std;

int main()
{
  //  input;

    int t;
    cin>>t;
    int c = 0;
    while (t--)
    {
        int l,w,h;
        cin>>l>>w>>h;
        if(l <= 20 and w <= 20 and h <= 20){
            printf("Case %d: good\n", ++c);
        } else {
            printf("Case %d: bad\n", ++c);
        }
    }
}