#include <iostream>
//Feito por Juan Juan e Leonardo Longato//


int main()
{
	int n;
	int j = 0;
	cout << "Quantos discos? ";
	cin >> n;
	if (n % 2 == 1) {
		for (int i = 1; i < (pow(2, n) - 1); i++) {
			j++;
			switch (j) {
			case 1:
				cout << "Movendo o disco de A para B" << endl;
				break;
			case 2:
				cout << "Movendo o disco de A para C" << endl;
				break;
			case 3:
				cout << "Movendo o disco de B para C" << endl;
				break;
			case 4:
				cout << "Movendo o disco de A para B" << endl;
				break;
			case 5:
				cout << "Movendo o disco de C para A" << endl;
				break;
			case 6:
				cout << "Movendo o disco de C para B" << endl;
				break;
			case 7:
				cout << "Movendo o disco de A para B" << endl;
				break;
			case 8:
				cout << "Movendo o disco de A para C" << endl;
				break;
			case 9:
				cout << "Movendo o disco de B para C" << endl;
				break;
			case 10:
				cout << "Movendo o disco de B para A" << endl;
				break;
			case 11:
				cout << "Movendo o disco de C para A" << endl;
				break;
			case 12:
				cout << "Movendo o disco de B para C" << endl;
				j = 0;
				break;
			}
		}
	}
	else {
		for (int i = 1; i < (pow(2, n) - 1); i++) {
			j++;
			switch (j) {
			case 1:
				cout << "Movendo o disco de A para C" << endl;
				break;
			case 2:
				cout << "Movendo o disco de A para B" << endl;
				break;
			case 3:
				cout << "Movendo o disco de C para B" << endl;
				break;
			case 4:
				cout << "Movendo o disco de A para C" << endl;
				break;
			case 5:
				cout << "Movendo o disco de B para A" << endl;
				break;
			case 6:
				cout << "Movendo o disco de B para C" << endl;
				break;
			case 7:
				cout << "Movendo o disco de A para C" << endl;
				break;
			case 8:
				cout << "Movendo o disco de A para B" << endl;
				break;
			case 9:
				cout << "Movendo o disco de C para B" << endl;
				break;
			case 10:
				cout << "Movendo o disco de C para A" << endl;
				break;
			case 11:
				cout << "Movendo o disco de B para A" << endl;
				break;
			case 12:
				cout << "Movendo o disco de C para B" << endl;
				j = 0;
				break;
			}
		}
	}
	getchar();
	return 0;
}