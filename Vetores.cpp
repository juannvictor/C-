#include <cstdlib>
#include <iostream>
#include <ctime>

#define TAM_MAX 10
#define MAX_INT 10

using namespace std;

// Declarando as funções

void imprimeVetor(int[], int);
int preencheAleatorio(int[], int);
int somaVetor(int[], int);
int somaParesVetor(int[], int);
int buscaElemVetor(int[], int, int);
int contaOcorrenciasElemVetor(int v[], int n, int elem);

// Implementação das funções

int preencheAleatorio(int v[], int n){
	int k = 0;
	srand((unsigned)time(0));
	while (k < n && k < TAM_MAX){
		v[k] = (rand()%MAX_INT);
		k++;
	}
	return k;
}

void imprimeVetor(int v[], int n){
	int k;
	cout << "[";
	for (k = 0; k<n; k++){
		cout << v[k] << ' ';
	}
	cout << "]\n";
}

int somaVetor(int v[], int n){
	int k, total = 0;
	for (k=0; k<n; k++){
		total += v[k];
	}
	return total;
}

// Exercícios: Complete esse código com funções para:
//  1 - Somar os valores pares de um vetor

int somaParesVetor(int v[], int n){
	int k, total = 0;
	for (k=0; k<n; k++){
		if (v[k]%2 == 0){
			total += v[k];
		}
	}
	return total;
}

// 2 - Buscar um dado elemento em um vetor 

int buscaElemVetor(int v[], int n, int elem){
	for (int k=0; k<n; k++){
		if (v[k] == elem){
			return k;
		}
		else {
			return -1;
		}
	}
}

// 3 - Retornar a quantidade de ocorrências de um dado elemento em um vetor

int contaOcorrenciasElemVetor(int v[], int n, int elem){
	int qtd = 0;
	for (int k=0; k<n; k++){
		if (v[k] == elem){
			qtd++;
		}
	}
	return qtd;
}

// 4 - Retornar o valor do maior elemento de um vetor não vazio
// 5 - Retornar a quantidade de elementos do vetor que são menores que um dado valor
// 6 - Comparar se dois vetores são iguais

//  Função main

int main(){
	int v[TAM_MAX];
	int qtdVet = 0;
	int num;
	int indice;
	int ocorrencias;
	
	imprimeVetor(v, qtdVet);
	qtdVet = preencheAleatorio(v,5);
	imprimeVetor(v, qtdVet);
	
	cout << "A soma dos elementos do vetor é: " << somaVetor(v, qtdVet) << endl;
	cout << "A soma dos pares do vetor é " << somaParesVetor(v, qtdVet) << endl << endl;
	
	cout << "Digite o valor a ser buscado no vetor: ";
	cin  >> num;
	
	indice = buscaElemVetor(v, qtdVet, num);
	if (indice >= 0){
		cout << num << " ocorre na posicao " << indice << endl;
	}
	else {
		cout << num << " nao ocorre no vetor" << endl;
	}
	
	ocorrencias = contaOcorrenciasElemVetor(v, qtdVet, num);
	cout << num << " ocorre " << ocorrencias << " vezes no vetor\n";
	
	// system("PAUSE");
	return 0;
}
