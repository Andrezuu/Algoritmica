#include <bits/stdc++.h>
#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
using namespace std;

long long sumaDigitos(long long valor){
    if(valor == 0){
        return valor%10;
    }
    return valor%10 + sumaDigitos(valor/10);
}
int main(){
   // input;
    long long num;
    while(scanf("%lld", &num), num){
        long long resultado = sumaDigitos(num);
        while(resultado > 9){
            resultado = sumaDigitos(resultado);
        }
        
        cout<<resultado<<endl;
    }
}