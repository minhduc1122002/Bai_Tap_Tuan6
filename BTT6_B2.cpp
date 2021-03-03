#include <iostream>
using namespace std;
void swap(char* a, int pos1, int pos2) {
	char temp = a[pos1];
	a[pos1] = a[pos2];
	a[pos2] = temp;
}
void output(char* a, int n) {
	for (int i=0;i<n;i++) {
		cout << a[i];
	}
	cout << " ";
}
void permutation(char* a, int k, int scan, int n) {
	if (scan==n) {
		output(a, n);
	}
	else {
		for (int i=scan;i<k;i++) {
			swap(a, scan, i);
			permutation(a, k, scan+1, n);
			swap(a, scan, i);
		}
	}
}
int main() {
	int n, k;
	cin >> k >> n;
	char *a = new char[k];
	for (int i = 0;i < k;i++) {
		a[i] = ('a'+i);
	}
	permutation(a, k, 0, n);
	delete[] a;
}
