#include <iostream>
#include "fila.h"

using namespace std;

FilaSequencial::FilaSequencial(int capacidade){
    tamanho = 0;
    fila = new int[capacidade-1];
    ini = 0;
    cout << "\nCriando fila de capacidade -> " << capacidade << endl;
}

FilaSequencial::~FilaSequencial(){
    delete fila;
}

bool FilaSequencial::filaVazia(){
    if(tamanho==0){
        return true;
    }else{
        return false;
    }
}

bool FilaSequencial::filaCheia(){
    if(capacidade==tamanho){
        return true;
    }else{
        return false;
    }
}

int FilaSequencial::getTamanho(){
 return tamanho;
}

void FilaSequencial::remove(){
    if(!filaVazia()){
        tamanho--;
        ini = (ini+1)%capacidade;
    }else{
        cout << "Fila vazia!" << endl;
    }
}

void FilaSequencial::setFinalFila(int data){
    if(!filaCheia()){
        fila[(ini+tamanho)%capacidade] = data;
        tamanho++;
    }else{
        cout << "Fila cheia!"<< endl;
    }
}

int FilaSequencial::getFrente(){
    if(!filaVazia()){
        return fila[ini];
    }else{
        cout << "\nPilha vazia!" << endl;
    }
}

void FilaSequencial::filaVisivel(){
    if(filaVazia()){
        cout << "Fila vazia." << endl;
    }else{
        cout << "\n|";
        int aux = ini;
        for(int i = 0; i < tamanho; i++){
            cout << fila[(ini+i)%capacidade] << "|";
        }
        cout << endl;
    }

}