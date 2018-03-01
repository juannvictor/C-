#define TAM_MAX 10
#define MAX_INT 10

// declarando a Classe

class Vetor{
private:
	int v[TAM_MAX];
	int qtdVet;
public:
	Vetor();
	void imprimeVetor();
	void preencheAleatorio(int);
	int somaVetor();
	int somaParesVetor();
	int buscaElemVetor(int);
	int ocorrenciasElem(int elem);
};
