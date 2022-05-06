#include "Header.h"

int punkt1();
int punkt2();
int punkt3();


int main() {
	setlocale(LC_ALL, "rus");
	srand(time(0));
	
	punkt1();
	punkt2();
	punkt3();

}
int punkt1() {
	int size;
	cout << "Vvedite razmer massiva: ";
	cin >> size;
	if (size <= 0)
		return -1;
	double* ar = create(size);
	newData(ar, size);
	print(ar, size);
	clear(ar);
	int a;
	cout << "any number - Next, 0 - Exit: ";
	cin >> a;
	if (a==0) {
		cout << endl;
		return 0;
	}
	punkt1();
}

int punkt2() {
	int* ar = new int[12];
	cout << "napishite 12 elementov: ";
	for (int i = 0; i < 12; ++i) {
		int b;
		cin >> b;
		ar[i] = b;
	}
	sortirovka(ar, 12);
	delete[] ar;
	cout << endl;
	return 0;
}

int punkt3() {
	int lin, stolb;
	cout << "skolko liniy?: ";
	cin >> lin;
	cout << "skolko stolbilov?: ";
	cin >> stolb;

	int** ar = new int* [lin];
	for (int i = 0; i < lin; ++i)
		ar[i] = new int[stolb];

	cout << endl;

	createDouble(ar, lin, stolb);
	printDouble(ar, lin, stolb);

	for (int i = 0; i < lin; ++i)
		delete[] ar[i];

	return 0;
}