#include <bits/stdc++.h>
#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
using namespace std;

vector<int> grafo[100];
//RECORRIDO EN PROFUNDIDAD
void dfs(int inicio ){
    stack<int> pila;
    vector<int> visitados(100, 0);
    pila.push(inicio);
    while(!pila.empty()){
        int nodoActual = pila.top();
        pila.pop();
        if(visitados[nodoActual] == 0){
            visitados[nodoActual] = 1;
            for(int i = 0; i<grafo[nodoActual].size(); i++){
                int amigoNodoActual = grafo[nodoActual][i];
                pila.push(amigoNodoActual);
            }
        }
    }

}

int main (){

}