#include <iostream>
#include <string>
using namespace std;

int arr[20]; //deklarasi variabel global array a dengan ukuran 20
int n; //deklarasi variabel global n untuk menyimpan banyak elemen array

void input(){
	int d;
	while (true) {
		cout << " Masukan banyaknya elemen pada array : "; // menampilkan ke layar
		cin >> n; // input dari user
		if (n <= 20) // jika kurang atausama dengan 20
			break; // keluar dari loop
		else
		{
			cout << "\nArray dapat mempunyai maksimal 20 elemen.\n"; // menampilkan ke layar
		}
	}
	cout << endl;
	cout << "=====================" << endl;
	cout << "Masukan Elemen Array" << endl;
	cout << "=====================" << endl;

	for (int i = 0; i < n; i++) {
		cout << "Data ke-" << (i + i) << " : ";
		cin >> arr[i];

	}

}

void BubbleSortArray() {
	int pass = 1;
	do {
		for (int j = 0; j <= n - 1 - pass; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp;
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
		pass = pass + 1;

	} while (pass <= n - 1);

}

void display() {
	cout << endl;
	cout << "=================================" << endl;
	cout << "Element Array yang telah tersusun" << endl;
	cout << "==================================" << endl;
	for (int j = 0; j < n; j++) {
		cout << arr[j] << endl;
	}
	cout << "Jumblah pass = " << n - 1 << endl;
	cout << endl;
}
