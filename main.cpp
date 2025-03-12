#include <iostream>
#include "fila.h"

using namespace std;

int main(){

    FilaSequencial fila(4);

    cout << "\nAdicionando os numeros 1, 2 e 3 na fila respectivamente e imprimindo o primeiro da fila.\n";
    
    fila.setFinalFila(1);
    fila.setFinalFila(2);
    fila.setFinalFila(3);
    cout << "Primeiro da fila -> " << fila.getFrente() << endl;
    
    cout << "\nImprimindo fila apenas para visualizacao.\n";
    fila.filaVisivel();
    
    cout << "\nRemovendo o intem a frente da fila e adicionando o 5 e o 4(nessa ordem).\n";
    fila.remove();
    fila.setFinalFila(5);
    fila.setFinalFila(4);
    cout << "Primeiro da fila -> " << fila.getFrente() << endl;
    
    cout << "\nImprimindo fila apenas para visualizacao.\n";
    fila.filaVisivel();
    
    cout << "\nRemovendo o intem a frente 3 vezes e adicionando o 8.\n";
    fila.remove();
    fila.remove();
    fila.remove();
    fila.setFinalFila(8);
    cout << "Primeiro da fila -> " << fila.getFrente() << endl;
    
    cout << "\nImprimindo fila apenas para visualizacao.\n";
    fila.filaVisivel();
    

    return 0;
}