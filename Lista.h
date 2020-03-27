#ifndef LISTA_H
#define LISTA_H

#include <iostream>
using namespace std;

#include "ListaNode.h"

template <typename T>
class Lista //Lista ligada dos objetos da ListaNode
{
public:
    Lista();
    ~Lista();
    void inserirNovoNode(T); //Função para inserir um novo nó
    void print();
    ListaNode<T>* procurar(T); //Procura por um valor na lista ligada e retorna o ponto do objeto que contem o valor procurado
private:
    ListaNode<T> *startPoint; //Armazena em ponteiro o primeiro objeto da lista ligada
    ListaNode<T> *endPoint; //Armazena em ponteiro o ultimo objeto da lista ligada
    bool eVazia();
    void inserirComeco(T);
    void inserirFim(T); 
};

template <typename T>
Lista<T>::Lista() //Cria a lista com o começo e fim igual a NULL
{
  startPoint = NULL;
  endPoint = NULL;
}

template <typename T>
Lista<T>::~Lista()
{
  if (!eVazia()) //Lista nao esta eVazia
  {
    ListaNode<T> *exatoPoint = startPoint;
    ListaNode<T> *tempPoint;
    
    while (exatoPoint != 0)
    {
      tempPoint = exatoPoint;
      exatoPoint = exatoPoint -> proxPoint;
      delete tempPoint;
    }
  }
}

template <typename T>
bool Lista<T>::eVazia()
{
  if (startPoint == NULL && endPoint == NULL) //Lista Vazia
    return 1;
  else 
    return 0;
}

template <typename T>
void Lista<T>::inserirComeco(T dataIn)
{
  if(eVazia()) //Se a lista ta vazia cria o 1 elemento da lista 
  {
    ListaNode<T> * novoPoint = new ListaNode<T>(dataIn);
    startPoint = novoPoint;
    endPoint = novoPoint;
  }
  else
  {
    ListaNode<T> * novoPoint = new ListaNode<T>(dataIn);
    novoPoint->proxPoint = startPoint;
    startPoint = novoPoint;
  }
}

template <typename T>
void Lista<T>::inserirFim(T dataIn)
{
  if(eVazia())
  {
    ListaNode<T> * novoPoint = new ListaNode<T>(dataIn);
    startPoint = novoPoint;
    endPoint = novoPoint;
  }
  else
  {
    ListaNode<T> * novoPoint = new ListaNode<T>(dataIn);
    endPoint->proxPoint = novoPoint;
    endPoint = novoPoint;
  }
}

template <typename T>
void Lista<T>::inserirNovoNode(T dataIn) 
{
  if(eVazia())
  {
    inserirComeco(dataIn);
  }
  else
  {
    if (dataIn < startPoint-> data)
    {
      inserirComeco(dataIn);
    }
    else if(dataIn >= endPoint-> data)
    {
      inserirFim(dataIn);
    }
    else
    {
      ListaNode<T> * exatoPoint = startPoint;
      ListaNode<T> * novoPoint = new ListaNode<T>(dataIn);
      while(exatoPoint != endPoint) //Percorre a lista até o final
      {
        if((novoPoint->data < exatoPoint->proxPoint->data) && (novoPoint->data >= exatoPoint->data))
        {
          ListaNode<T> * proximo = exatoPoint->proxPoint;
          exatoPoint-> proxPoint = novoPoint;
          novoPoint-> proxPoint = proximo;
          break;
        }
        exatoPoint = exatoPoint->proxPoint;
      }
    } 
  }
}

template <typename T>
void Lista<T>::print()
{
  if(eVazia())
  {
    cout << "A Lista esta vazia" << endl;
  }
  else
  {
    ListaNode<T> * exatoPoint = startPoint;
    cout << "Os componentes da lista são: ";
    while(exatoPoint != NULL) //printa até o fim da lista
    {
      cout << exatoPoint->data << ' ';
      exatoPoint = exatoPoint->proxPoint; 
    }
    cout << endl;
  }
}

template <typename T>
ListaNode<T>* Lista<T>::procurar(T key)
{
  ListaNode<T>* nodePoint;
  bool found = false;
  nodePoint = startPoint;
  while((!found) && (nodePoint != NULL))
  {
    if(nodePoint-> data == key)
      found = true;
    else
      nodePoint = nodePoint->proxPoint;
  }
  return nodePoint;
}
#endif
