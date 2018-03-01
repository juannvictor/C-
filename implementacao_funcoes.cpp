#include "vetor.h"
#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

// Implementação dos metodos do vetor
// ou implementação das funções membro do vetor

Vetor::Vetor(){
	qtdVet = 0;
}

void Vetor::preencheAleatorio(int n){
	int k = 0;
	srand((unsigned)time(0));
	while (k<n && k<TAM_MAX){
		v[k] = (rand()%MAX_INT);
		k++;
	}
	qtdVet = k;
}

void Vetor::imprimeVetor(){
	int k;
	
	cout << "[";
	for (k=0; k<qtdVet; k++){
		cout << v[k] << ' ';
	}
	cout << "]\n";
}

int Vetor::somaVetor(){
	int k, total = 0;
	
	for (k=0; k<qtdVet; k++){
		total += v[k];
	}
	return total;
}

int Vetor::somaParesVetor(){
	int k, total=0;
	for (k=0; k<qtdVet; k++){
		if (v[k]%2 == 0){
			total += v[k];
		}
	}
	return total;
}

int Vetor::buscaElemVetor(int elem){
	for (int k=0; k<qtdVet; k++){
		if (v[k] == elem){
			return k;
		}
	}
	return -1;
}

int Vetor::ocorrenciasElem(int elem){
	int qtd = 0;
	for (int k=0; k<qtdVet; k++){
		if (v[k] == elem){
			qtd++;
		}
	}
	return qtd;
}
