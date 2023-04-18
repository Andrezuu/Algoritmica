#include <bits/stdc++.h>
#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
using namespace std;

int main()
{
     input;

    int g, s, c;
    cin >> g >> s >> c;
    int valor = 3 * g + 2 * s + c;
    if (valor >= 8)
    {
        cout << "Province or Gold" << endl;
    }
    else if (valor >= 6)
    {
        cout << "Duchy or Gold\n";
    }
    else if (valor >= 5)
    {
        cout << "Duchy or Silver\n";
    }
    else if (valor >= 3)
    {
        cout << "Estate or Silver\n";
    }
    else if (valor >= 2)
    {
        cout << "Estate or Copper\n";
    } else {
        cout<< "Copper\n";
    }
}