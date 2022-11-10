#include <iostream>
#include <vector>
#include <string>
using namespace std;
void Regulament() {
	cout << "Playerul alege 2 numere intre 0 si 120" << endl;
	cout << "Calculatorul alege random aceste numere si le compara" << endl;
	cout << "pentru a decide cine este castigator" << endl;
	cout << "Piatra intre 0 si 40 inclusiv" << endl;
	cout << "Hartie intre 40 si 80 inclusiv" << endl;
	cout << "Foarfeca intre 80 si 120 inclusiv" << endl;
}
void spatii() {
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;

}
void castigator() {
	cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$";
	cout << endl;
}
void dieji() {
	cout << "################################################################";
	cout << endl;
}

int main() {
	int a[120], b[120];

	Regulament();
	spatii();


	for (int i = 0; i < 2; i++) {
		cout << "Player 1 alege";
		cout << endl;
		cin >> a[i];
		if (a[i] > 0 && a[i] <= 40) {
			cout << "Ai ales piatra";
			cout << endl;
		}
		else if (a[i] > 40 && a[i] <= 80) {
			cout << "Ai ales hartie";
			cout << endl;
		}
		else if (a[i] > 80 && a[i] <= 120) {
			cout << "Ai ales foarfeca";
			cout << endl;
		}
		cout << endl;
	}
		for (int i = 0; i < 2; i++) {
			b[i] = rand() % 121;
			cout << "Calculatorul a ales" << " " << b[i];
			//b[i] = rand() % 121;
			cout << endl;
			if (b[i] > 0 && b[i] <= 40) {
				cout << "Calculatorul a ales piatra";
				cout << endl;
			}
			else if (b[i] > 40 && b[i] <= 80) {
				cout << "Calculatorul a ales hartie";
				cout << endl;
			}
			else if (b[i] > 80 && b[i] <= 120) {
				cout << "Calculatorul a ales foarfeca";
				cout << endl;
			}
			cout << endl;
		}
		dieji();
		for (int i = 0; i < 2; i++) {
			if (a[i] > 0 && a[i] <= 40 && b[i] > 80 && b[i] <= 120) {
				cout << "Player castiga";
				cout << endl;
				castigator();
			}
			if (b[i] > 0 && b[i] <= 40 && a[i] > 80 && a[i] <= 120) {
				cout << "Calculator castiga";
				cout << endl;
				castigator();
			}
			if (a[i] > b[i]) {
				cout << "Player castiga";
				cout << endl;
				castigator();
			}
			else {
				cout << "Calculatorul castiga";
				cout << endl;
				castigator();
			}
		}
	}
