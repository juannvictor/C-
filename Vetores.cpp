#include <cstdlib>
#include <iostream>
#include <ctime>

#define TAM_MAX 10
#define MAX_INT 10

using namespace std;

// Declarando as fun��es

void imprimeVetor(int[], int);
int preencheAleatorio(int[], int);
int somaVetor(int[], int);
int somaParesVetor(int[], int);
int buscaElemVetor(int[], int, int);
int contaOcorrenciasElemVetor(int v[], int n, int elem);
int maiorValor(int v[], int n);
int qtdeElemMenores(int v[], int n, int elem);
int compararVetores(int v[], int w[], int n);

// Implementa��o das fun��es

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

// Exerc�cios: Complete esse c�digo com fun��es para:
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
	}
	return -1;
}

// 3 - Retornar a quantidade de ocorr�ncias de um dado elemento em um vetor

int contaOcorrenciasElemVetor(int v[], int n, int elem){
	int qtd = 0;
	for (int k=0; k<n; k++){
		if (v[k] == elem){
			qtd++;
		}
	}
	return qtd;
}

// 4 - Retornar o valor do maior elemento de um vetor n�o vazio

int maiorValor(int v[], int n){
	int k, maiorvalor = 0;
	for (k=0; k<n; k++){
		if(v[k] > maiorvalor){
			maiorvalor = v[k];
		}
	}
	return maiorvalor;
}
// 5 - Retornar a quantidade de elementos do vetor que s�o menores que um dado valor

int qtdeElemMenores(int v[], int n, int elem){
	int qtd = 0;
	for (int k=0; k<n; k++){
		if (v[k] < elem){
			qtd++;
		}
	}
	return qtd;
}
// 6 - Comparar se dois vetores s�o iguais
int compararVetores(int v[], int w[], int n){
	int qtd = 0;
	for (int k = 0; k<n; k++){
		if (v[k] == w[k]){
			qtd++;
		}
		else{
			return -1;
		}
		return qtd;
	}
}

//  Fun��o main

int main(){
	int v[TAM_MAX];
	int w[TAM_MAX];
	int qtdVet = 0;
	int num;
	int indice;
	int ocorrencias;
	int maiorvalor;
	int menores;
	int num2;
	int compararVetor;
	
	qtdVet = preencheAleatorio(v,5);
	imprimeVetor(v, qtdVet);
	
	cout << "A soma dos elementos do vetor e: " << somaVetor(v, qtdVet) << endl;
	cout << "A soma dos pares do vetor e: " << somaParesVetor(v, qtdVet) << endl;
	maiorvalor = maiorValor(v, qtdVet);
	cout << maiorvalor << " e o maior elemento do vetor." << endl << endl;
	
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
	cout << num << " ocorre " << ocorrencias << " vezes no vetor\n" << endl;
	
	cout << "Digite um numero a ser comparado: ";
	cin  >> num2;
	menores = qtdeElemMenores(v, qtdVet, num2);
	cout << menores << " numeros no vetor sao menores que " << num2 << endl << endl;
	
	qtdVet = preencheAleatorio(v,5);
	imprimeVetor(v, qtdVet);
	qtdVet = preencheAleatorio(w,5);
	imprimeVetor(w, qtdVet);
	
	compararVetor = compararVetores(v, w, qtdVet);
	if (compararVetor >= 0){
		cout << "Os vetores sao iguais." << endl;
	}
	else{
		cout << "Os vetores nao sao iguais." << endl;
	}
	
	
	//system("PAUSE");
	return 0;
}
