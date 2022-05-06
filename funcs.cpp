#include "Header.h"

double* create(int size) {
	double* ar = new double[size];
	return ar;
}

void newData(double* ar, int size) {
	for (int i = 0; i < size; ++i) {
		ar[i] = rand() % 20;
	}
}

void print(double* ar, int size) {
	for (int i = 0; i < size; ++i) {
		cout << ar[i] << " ";
	}
	cout << endl;
}

void clear(double* ar) {
	delete[] ar;
}

void sortirovka(int* ar, int size) {
	for (auto i = 0; i < size; i += 2) {
		int temp = ar[i];
		ar[i] = ar[i + 1];
		ar[i + 1] = temp;
	}
	for (auto i = 0; i < size; i++)
		cout << ar[i] << " ";
	cout << endl;
}


void createDouble(int** ar, int lines, int columns) {
	for (int i = 0; i < lines; ++i) {
		for (int j = 0; j < columns; ++j) {
			ar[i][j] = rand() % 50 + 10;
		}
	}
}

void printDouble(int** ar, int lines, int columns) {
	for (int ind1 = 0; ind1 < lines; ++ind1) {
		for (int ind2 = 0; ind2 < columns; ++ind2) {
			cout << ar[ind1][ind2] << " ";
		}
		cout << endl;
	}
}