#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;
int main() {
	/*const int n = 5;
	const int m = 4;
	int mas[n][m];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			mas[i][j] = 10 * i;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << mas[i][j]<<' ';
		}
		cout << endl;
	}
}*/
/*Matrix7◦
. Дана матрица размера M × N и целое число K (1 ≤ K ≤ M). Вывести
элементы K-й строки данной матрицы*/
/*const int n = 3;
const int m = 5;
int mas[n][m];
srand(time(0));
for (int i = 0; i < n; i++) {
	for(int j=0;j<m;j++){
		mas[i][j] = rand() % 101 - 50;
	}
}
cout << "matrix\n";
for (int i = 0; i < n; i++) {
	for (int j = 0; j < m; j++) {
		cout << setw(4) << mas[i][j];
	}
	cout << endl;
}
int k;
cin >> k;
for (int p = 0; p < m; p++) {
	cout << mas[k][p] << ' ';
}*/
	const int n = 6;
	const int m = 8;
	int mas[n][m];
	srand(time(0));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			mas[i][j] = rand() % 101 - 50;
		}
	}
	cout << "matrix\n";
	for (int i = 0; i < n; i=i+2) {
		for (int j = 0; j < m; j++) { 
				cout << setw(4) << mas[i][j];
		}
		cout << endl;
	}
}