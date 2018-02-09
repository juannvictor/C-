#include <cstdlib>
#include <iostream>
#include <ctime> 

#define TAM_MAX  10
#define MAX_INT  10

using namespace std;

// ----------------- DECLARACAO das funcoes 
void imprimeVetor(int [], int);
int  preencheAleatorio(int [], int);
int  somaVetor(int [], int);
int multiplicarnumero(int, int);

// ----------------- IMPLEMENTACAO  das funcoes
int preencheAleatorio(int v[], int n) { 
    int k=0;
    srand((unsigned)time(0)); 
    while ( k < n  &&  k<TAM_MAX ){
        v[k] = (rand()%MAX_INT); 
        k++;
        
    }
    return k;
}

void imprimeVetor(int v[], int n){
    int k;
    
    cout << "[";
    for (k=0; k<n; k++){
        cout << v[k] << ' ';
    }
    cout << "]\n";
}


int somaVetor(int v[], int n){
    int k, total=0;
    
    for (k=0; k<n; k++){
        total += v[k];
    }
    return total;
}

int multiplicarnumero(int n1, int n2){
	int total = n1 + n2;
	return total;
	
}
// ----------------- Funcao main
int main()
{
    int n1 = 0;
    int n2 = 0;
    cout << "Somador de números.";
    cout << "Digite o valor de n1:";
    cin >> n1;
    cout << "Digite o valor de n2:";
    cin >> n2;
    cout << multiplicarnumero(n1, n2);
    cout << "\n";
    
    system("PAUSE");
    return 0;
}
