#include <cstdlib>
#include <iostream>
#include <ctime>

#define TAM_MAX 10
#define MAX_INT 10
#define COLS 10

using namespace std;

// Declaração das funções 

void imprimeMatriz(int [][COLS], int);
int preencheAleatorio(int [][COLS], int);
int somaMatriz(int [][COLS], int);
int somaPares(int v[][COLS], int n);
int buscaElem(int v[][COLS], int n, int elem);

// Implementação das funções
// Preenchendo n linhas da matriz

int preencheAleatorio(int v[][COLS], int n){
	int k=0;
	srand((unsigned)time(0));
	while (k<n && k<TAM_MAX){
		for (int c=0; c< COLS; c++){
			v[k][c] = (rand()%MAX_INT);
		}
		k++;
	}
	return k;
}

void imprimeMatriz(int v[][COLS], int n){
	int k;
	cout << endl;
	for (k=0; k<n; k++){
		for (int c=0; c< COLS; c++){
			cout << v[k][c] << ' ';
		}
		cout << endl;
	}
	cout << endl;
}

int somaMatriz(int v[][COLS], int n){
	int k, total = 0;
	for (k=0; k<n; k++){
		for (int c=0; c< COLS; c++){
			total += v[k][c];
		}
	}
	return total;
}

// Exercícios: Complete este código com funções para:
// 1 - Somar os valores pares de uma matriz

int somaPares(int v[][COLS], int n){
	int k, totalPares=0;
	for (k=0; k<n; k++){
		for (int c=0; c<COLS; c++){
			if (v[k][c]%2==0){
				totalPares += v[k][c];
			}
		}
	}
	return totalPares;
}
// 2 - Buscar um dado elemento em uma matriz

int buscaElem(int v[][COLS], int n, int elem){
	for (int k=0; k<n; k++){
		for (int c=0; c<COLS; c++){
			if (v[k][c] == elem){
				return v[k][c];
			}
		}
	}
	return -1;
}

// 3 - Retornar a quantidade de ocorrências de um dado elemento numa matriz


// 4 - Retornar o valor do maior elemento de uma matriz não vazia
// 5 - Retornar a quantidade de elementos da matriz que são menores que um dado valor
// 6 - Comparar se duas matrizes são iguais
// 7 - Somar os valores de uma dada linha da matriz
// 8 - Somar os valores de uma dada coluna da matriz
// 9 - Verificar se um dado vetorocorre em alguma linha da matriz

// Função main

int main(){
	int v[TAM_MAX][COLS];
	int qtdLin = 0;
	int num;
	int indice;
	
	imprimeMatriz(v, qtdLin);
	qtdLin = preencheAleatorio(v,5);
	imprimeMatriz(v, qtdLin);
	
	cout << "a soma dos elementos da matriz e: " << somaMatriz(v, qtdLin) << endl;
	cout << "a soma dos elementos pares da matriz e: " << somaPares(v, qtdLin) << endl << endl;
	
	cout << "Digite um numero a ser buscado na matriz: ";
	cin  >> num;
	
	indice = buscaElem(v, qtdLin, num);
	if (indice >= 0){
		cout << num << " ocorre na posicao " << indice << endl;
	}
	
	system("PAUSE");
	return 0;
}
