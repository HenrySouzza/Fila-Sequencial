#ifndef __FILA_H_
#define __FILA_H_

class FilaSequencial{
private:
    int* fila;
    int tamanho, capacidade, ini;
public:
    FilaSequencial(int capacidade);
    ~FilaSequencial();
    bool filaVazia();
    bool filaCheia();
    int getTamanho();
    void remove();
    void setFinalFila(int data);
    int getFrente();
    void filaVisivel();
};

#endif