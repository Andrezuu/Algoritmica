#include <bits/stdc++.h>
#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
using namespace std;

int main()
{
    //    input;

    int t;
    cin>>t;
    while (t--)
    {
        long long n1, n2;
        cin>>n1>>n2;
        if (n1 < n2)
        {
            cout << "<" << endl;
        }
        else if (n1 > n2)
        {
            cout << ">" << endl;
        }
        else
        {
            cout << "=" << endl;
        }
    }
}
