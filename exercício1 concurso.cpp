#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <stdlib.h>

using namespace std;

main(){
	
	int qtd = 100000;
	
	int inscricoes[qtd];
	float notas[qtd];
	int contador;
	
	string linha1;
	string linha2;
	
	ifstream f1;
	ifstream f2;
	
	ostringstream qtdS;
	qtdS << qtd;
	
	string arquivo = "C:\\Users\\j80052321\\Documents\\concurso\\concurso" + qtdS.str() + "Inscritos(identif).txt";
	f1.open(arquivo.c_str());
	
	arquivo = "C:\\Users\\j80052321\\Documents\\concurso\\concurso" + qtdS.str() + "Inscritos(notas).txt";
	f2.open(arquivo.c_str());
	
	contador = 0;
	while (!f1.eof()){
		getline(f1, linha1);
		inscricoes[contador] = atoi(linha1.c_str());
		contador++;
		if (contador> qtd - 1){
			break;
		}
	}
	
	contador = 0;
	while(!f2.eof()){
		getline(f2, linha2);
		notas[contador] = atof(linha2.c_str());
		contador++;
		if (contador > qtd - 1){
			break;
		}
	}
	
	int i;
	for (i=0; i <= sizeof(notas)/4 - 1; i++){
		cout << inscricoes[i] << " - " << notas[i] << "\n\n";
	}
	
	float maior = 0;
	for (i=0; i<= sizeof(notas)/4 - 1; i++){
		if (notas[i] > maior){
			maior = notas[i];
		}
	}
	
	cout << "\n-----------------------------";
    cout << "\nCANDIDATO COM A NOTA MAXIMA:";
    cout << "\n\n";
    
    for (i = 0; i <= sizeof(notas)/4 - 1; i++){
    	if (notas[i] == maior){
    		cout << inscricoes[i] << " - " << notas[i] << "\n";
		}
	}
	
	//----------EXERCÍCIO 2 PT 1
	contador = 0;
	for (i = 0; i <= sizeof(notas)/4 - 1; i++){
		if (notas[i] >= 70){
			contador++;
		}
	}
	cout << "\nALUNOS APROVADOS";
	cout << "\n" << contador;
	cout << "\n\n";
	
	//----------EXERCICIO 2 PT 2	
	int percentual[5] = {0,0,0,0,0};
	for (i = 0; i <= sizeof(notas)/4 - 1; i++){
		if(notas[i] > 0 && notas[i] <= 20){
			percentual[0]++;
		}
		else if(notas[i] > 20 && notas[i] <= 40){
			percentual[1]++;
		}
		else if(notas[i] > 40 && notas[i] <= 60){
			percentual[2]++;
		}
		else if(notas[i] > 60 && notas[i] <= 80){
			percentual[3]++;
		}
		else if(notas[i] > 80 && notas[i] <= 100){
			percentual[4]++;
		}
	}
	
	cout << "a) Notas de 0 a 20: " << percentual[0]/1000 << "%\n";
	cout << "b) Notas de 20.01 a 40: " << percentual[1]/1000 << "%\n";
	cout << "c) Notas de 40.01 a 60: " << percentual[2]/1000 << "%\n";
	cout << "d) Notas de 60.01 a 80: " << percentual[3]/1000 << "%\n";
	cout << "e) Notas de 80.01 a 100: " << percentual[4]/1000 << "%\n";
	
	
	cout << "\n\n";
    system("pause");

}
