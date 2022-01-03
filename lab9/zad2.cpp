#include<iostream>

using namespace std;

template <typename T>
void mnozeniemacierzy(T m, T n, T p) {

	T **A = new T*[n];
	T **B = new T*[m];
	T **C = new T*[n];
	for (int i = 0; i < n; i++) {
		A[i] = new T[m];
		for (int k = 0; k < m; k++){
			A[i][k] = rand() % 13 + 1;
		}
	}
	cout << "A" << endl;
	for (int i = 0; i < n; i++) {
		for (int k = 0; k < m; k++){
			cout << A[i][k] << " ";
		}
		cout << endl;
	}
	cout << endl << endl;

	for (int k = 0; k < m; k++) {
		B[k] = new T[p];
		for (int j = 0; j < p; j++){
			B[k][j] = rand() % 13 + 1;
		}
	}

	cout << "B" << endl;
	for (int k = 0; k < m; k++) {
		for (int j = 0; j < p; j++){
			cout << B[k][j] << " ";
		}
		cout << endl;
	}
	cout << endl << endl;

	for (int i = 0; i < n; i++) {
		C[i] = new T[p];
		for (int j = 0; j < p; j++){
			C[i][j] = 0;
		}
	}

	for (int i = 0; i < n; i++){
		for (int j = 0; j <p; j++){
			for (int k = 0; k < m; k++){
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}
	cout << "C" << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < p; j++){
			cout << C[i][j] << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < n; i++) {
		delete[]A[i];
	}
	for (int i = 0; i < m; i++) {
		delete[]B[i];
	}
	for (int i = 0; i < n; i++) {
		delete[]C[i];
	}

	delete[]A;
	delete[]B;
	delete[]C;
}

template <typename T>
void dzialaniamacierzy(T m, T n) {
	T **A = new T*[m];
	T **B = new T*[m];
	T **C = new T*[m];
	T **D = new T*[m];
	for (int i = 0; i < m; i++) {
		A[i] = new T[n];
		B[i] = new T[n];
		C[i] = new T[n];
		D[i] = new T[n];
		for (int j = 0; j < n; j++){
			A[i][j] = rand() % 12 - 16;
			B[i][j] = rand() % 12 - 16;
		}
	}
	cout << "A" << endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++){
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl << endl;
	cout << "B" << endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++){
			cout << B[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl << endl;
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			C[i][j] = A[i][j] + B[i][j];
			D[i][j] = A[i][j] - B[i][j];
		}
	}
	cout << "C" << endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++){
			cout << C[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl << endl;
	cout << "D" << endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++){
			cout << D[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < m; i++) {
		delete[]A[i];
		delete[]B[i];
		delete[]C[i];
		delete[]D[i];
	}

	delete[]A;
	delete[]B;
	delete[]C;
	delete[]D;
}

int main(){
	int n, m, p;
	cout << "Podaj rozmiar m macierzy";
	cin >> m;
	cout << "Podaj rozmiar n macierzy";
	cin >> n;
	cout << "Podaj rozmiar p macierzy";
	cin >> p;
	cout << endl;
	cout << endl << "Dodawanie i odejmowanie macierzy ";
	dzialaniamacierzy<int>(m, n);
	cout << endl << "Mnozenie macierzy ";
	mnozeniemacierzy<int>(m, n, p);
	cout << endl << endl;
}