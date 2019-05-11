#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	long A[10], B[10], C[10];
	for (int i = 0; i < n; i++)
		cin >> A[i] >> B[i] >> C[i];
	for (int i = 0; i < n; i++) {
		if (A[i] + B[i] > C[i])
			cout << "Case #" << i+1 << ": true" << endl;
		else
			cout << "Case #" << i+1 << ": false" << endl;
    }
	return 0;
}