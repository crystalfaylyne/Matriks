#include<iostream>
using namespace std;
int main()
{
	int x, y;
	int a[100][100], i, j, k;


	cout << "masukkan baris :";
	cin >> x;
	cout << "masukkan kolom :";
	cin >> y;
	cout << endl;;
	for (i = 0; i < x; i++) {
		for (j = 0; j < y; j++) {
			cout << "  Masukkan Nilai Element Array Baris " << (i + 1) << " Kolom " << (j + 1) << " : ";

			cin >> a[i][j];
		}
		cout << endl;
	}

	for (i = 0; i < x; i++) {
		for (j = 0; j < y; j++) {
			cout << a[i][j] << "\t";
		}
		cout << endl << endl;
	}
	return 0;
}