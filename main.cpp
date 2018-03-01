#include <cstdlib>
#include <iostream>
#include "vetor.h"

using namespace std;

// Função main

int main(){
	
	Vetor v;
	int num;
	int indice;
	int ocorrencias;
	
	v.imprimeVetor();
	v.preencheAleatorio(5);
	v.imprimeVetor();
	
	cout << "A soma dos elementos do vetor e: " << v.somaVetor() << endl;
	cout << "A soma dos pares do vetor e: " << v.somaParesVetor() << endl << endl;
	
	cout << "Digite o valor a ser buscado no vetor: ";
	cin  >> num;
	
	indice = v.buscaElemVetor(num);
	if (indice >= 0){
		cout << num << " Ocorre na posicao " << indice << endl;
	}
	else{
		cout << num << " nao ocorre no vetor" << endl;
	}
	
	ocorrencias = v.ocorrenciasElem(num);
	cout << num << " Ocorre " << ocorrencias << " vezes no vetor\n";
	
	system("PAUSE");
	return 0;
}
