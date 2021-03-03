#include <iostream>
using namespace std;
void swap(char* arr, int pos1, int pos2) {
	char temp = arr[pos1];
	arr[pos1] = arr[pos2];
	arr[pos2] = temp;
}
void output(char* arr, int n) {
	for (int i=0; i<n;i++) {
		cout << arr[i];
	}
	cout << " ";
}
void permutation(char* arr, int k, int scan, int n) {
	if (scan==n) {
		output(arr, n);
	}
	else {
		for (int i=scan; i<k;i++) {
			swap(arr, scan, i);
			permutation(arr, k, scan+1, n);
			swap(arr, scan, i);
		}
	}
}
int main() {
	int n, k;
	cin >> k >> n;
	char *arr = new char[k];
	for (int i = 0; i < k; i++) {
		char add = ('a'+i);
		arr[i] = add;
	}
	int scan= 0;
	permutation(arr, k, scan, n);
	delete[] arr;
}
