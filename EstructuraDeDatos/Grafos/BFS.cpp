#include <bits/stdc++.h>
#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
using namespace std;

vector<int> grafo[100];
vector<bool> visitados(100);
vector<int> nivel(100);
//RECORRIDO EN ANCHURA
void BFS(int nodoInicial){
    queue<int> colaNodos;
    colaNodos.push(nodoInicial);
    visitados[nodoInicial] = true;
    nivel[nodoInicial] = 0;
    while(!colaNodos.empty()){
        int nodoActual = colaNodos.front(); //vemos al 0
        colaNodos.pop();
        for(int i = 0; i<grafo[nodoActual].size(); i++){ //se visita a los amigos
            int vecino = grafo[nodoActual][i];
            if(!visitados[vecino]){
                colaNodos.push(vecino);
                visitados[vecino] = true;
                nivel[vecino] = nivel[nodoActual] + 1;
            }

        }
    }
}

int main(){
    return 0;
}