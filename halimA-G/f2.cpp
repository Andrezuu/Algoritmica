#include <bits/stdc++.h>
#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
using namespace std;

int unDigito(int valor)
{
    int suma = 0;
    while(valor > 0){
        suma += valor%10;
        valor /= 10;
    }
    return suma;
}

float palabraValor(string ka, map<char, int> alfabeto)
{
    for (int i = 0; i < ka.length(); i++)
    {
        ka[i] = tolower(ka[i]);
    }
    int valor = 0;
    for(int i = 0; i<ka.length();i++){
        valor += alfabeto[ka[i]];
    }
    float suma =unDigito(valor);
    while (suma>9){
        suma = unDigito(suma);
    }
    
    return suma;

}

int main()
{
    map<char, int> alfabeto;
    string letras = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < letras.length(); i++)
    {
        alfabeto[letras[i]] = i+1;
    }
    input;
    char k1[25],k2[25];
    while (gets(k1))
    {
        gets(k2);
        float valor1 = palabraValor(k1, alfabeto);
        float valor2 = palabraValor(k2, alfabeto);
        
        printf("%.2f %%\n", min(valor1,valor2)/max(valor1,valor2) * 100.0);
        //cout<<r<<"%\n";
        
    }
    return 0;
}