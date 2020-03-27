#ifndef ARVORE_H
#define ARVORE_H

#include <iostream>
using namespace std;

#include "ArvoreNode.h"

template <typename T>
class Arvore
{
public:
    Arvore();
    void inserirNovoNode(T);
    void preOrdemPrint(); //printa a arvore na ordem que foi imputada
    void emOrdemPrint(); //printa a arvore na ordem ascendente
    void posOrdemPrint();
    void tamanho(T);
    ArvoreNode<T>* procurar(T);

private:
    ArvoreNode<T> *raizPoint;
    bool eVazia();

    //Funções de utilidade para as funções de print, search e insert :) 
    void inserirNovoNodeUtil(ArvoreNode<T>**,T);
    void preOrdemPrintUtil(ArvoreNode<T>*);
    void emOrdemPrintUtil(ArvoreNode<T>*);
    void posOrdemPrintUtil(ArvoreNode<T>*);
    void tamanhoUtil(ArvoreNode<T>*);
    ArvoreNode<T>* procurarUtil(ArvoreNode<T>*,T); 
};

template <typename T>
Arvore<T>::Arvore()
{
  raizPoint = 0;
}

template <typename T>
void Arvore<T>::inserirNovoNode(T dataIn)
{
  inserirNovoNodeUtil(&raizPoint, dataIn);
}

template <typename T>
void Arvore<T>::inserirNovoNodeUtil(ArvoreNode<T>** temp, T dataIn)
{
  if(*temp == 0) //se o nó é null; cria um novo nó com o dado imputado
    *temp = new ArvoreNode<T>(dataIn);
  else
  {
    if(dataIn < (*temp)-> data)
      inserirNovoNodeUtil(&((*temp)->pointEsq),dataIn);
    else
    {
      if(dataIn > (*temp)->data)
        inserirNovoNodeUtil(&((*temp)->pointDir),dataIn);
      else //se o valor imputado = dado no nó atual
        cout << dataIn << "é um valor duplicado" << endl;
    }
  }
}

template <typename T>
void Arvore <T>::preOrdemPrint()
{
  preOrdemPrintUtil(raizPoint);
}

template <typename T>
void Arvore<T>::preOrdemPrintUtil(ArvoreNode<T>* temp)
{
  if(temp != 0)
  {
    cout << temp->data << ' ';
    preOrdemPrintUtil(temp->pointEsq);
    preOrdemPrintUtil(temp->pointDir);
  }
}

template <typename T>
void Arvore<T>::emOrdemPrint()
{
  emOrdemPrintUtil(raizPoint);
}

template <typename T>
int Arvore<T>::tamanho()
{
  tamanhoUtil(raizPoint);
}

template <typename T>
void Arvore<T>::emOrdemPrintUtil(ArvoreNode<T>* temp)
{
  if(temp != 0)
  {
    emOrdemPrintUtil(temp->pointEsq);
    cout << temp->data << ' ';
    emOrdemPrintUtil(temp->pointDir);
  }
}

template <typename T>
void Arvore<T>::posOrdemPrint()
{
  posOrdemPrintUtil(raizPoint);
}

template <typename T>
void Arvore<T>::posOrdemPrintUtil(ArvoreNode<T>* temp)
{
  if(temp != 0)
  {
    posOrdemPrintUtil(temp->pointEsq);
    posOrdemPrintUtil(temp->pointDir);
    cout << temp -> data << ' ';
  }
}

template <typename T>
ArvoreNode<T>* Arvore<T>::procurar(T key)
{
  return procurarUtil(raizPoint, key);
}

template <typename T>
ArvoreNode<T>* Arvore<T>::procurarUtil(ArvoreNode<T>* folha, T key)
{
  if(folha != NULL)
  {
    if(key == folha->data)
      return folha;
    if(key < folha ->data)
      return procurarUtil(folha->pointEsq, key);
    else
      return procurarUtil(folha->pointDir, key);
  }
  else
    return NULL;
}

int <typename T>
ArvoreNode<T>* Arvore<T>::tamanhoUtil(ArvoreNode<T>* temp)
{
  if raizPoint == NULL;
    return 0;
  return max(tamanho(raizPoint->pointDir), tamanho(raizPoint->pointEsq)) +1; 
}



#endif
