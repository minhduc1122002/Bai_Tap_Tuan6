#include<iostream>
using namespace std;
void output(bool* a, char* num, int n) {
	for (int i=0;i<n;i++) {
		if (a[i]) {
			cout << num[i];
		}
	}
	cout << " ";
}
void combination(bool* a, char* num, int n, int scan) {
	if (scan == n) {
		output(a, num, n);
	}
	else {
		a[scan] = true;
		combination(a, num, n, scan + 1);
		a[scan] = false;
		combination(a, num, n, scan + 1);
	}
}
int main() {
	int n;
	cin >> n;
	char* num = new char[n];
	bool* a = new bool[n];
	for (int i=0;i<n;i++) {
		num[i] = ('a' + i);
	}
	combination(a, num, n, 0);
}
