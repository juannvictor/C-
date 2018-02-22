#include <cstdlib>
#include <iostream>
#include <ctime>

#define TAM_MAX 10
#define MAX_INT 10
#define COLS 10

using namespace std;

// Declara��o das fun��es 

void imprimeMatriz(int [][COLS], int);
int preencheAleatorio(int [][COLS], int);
int somaMatriz(int [][COLS], int);

// Implementa��o das fun��es
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

// Exerc�cios: Complete este c�digo com fun��es para:
// 1 - Somar os valores pares de uma matriz
// 2 - Buscar um dado elemento em uma matriz
// 3 - Retornar a quantidade de ocorr�ncias de um dado elemento numa matriz
// 4 - Retornar o valor do maior elemento de uma matriz n�o vazia
// 5 - Retornar a quantidade de elementos da matriz que s�o menores que um dado valor
// 6 - Comparar se duas matrizes s�o iguais
// 7 - Somar os valores de uma dada linha da matriz
// 8 - Somar os valores de uma dada coluna da matriz
// 9 - Verificar se um dado vetorocorre em alguma linha da matriz

// Fun��o main

int main(){
	int v[TAM_MAX][COLS];
	int qtdLin = 0;
	
	imprimeMatriz(v, qtdLin);
	qtdLin = preencheAleatorio(v,5);
	imprimeMatriz(v, qtdLin);
	
	cout << "a soma dos elementos da matriz e: " << somaMatriz(v, qtdLin) << endl;
	
	system("PAUSE");
	return 0;
}
