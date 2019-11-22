#include <iostream>
using namespace std;
int main() {
	int n, summa=0;
	cin >> n;
	for (int i=1; i<n; i++) {
		if (n%i==0) {
			summa=summa+i;
		}
	}
	if (summa==n) {
		cout << "yes";
	} else {
		cout << "no";
	}
}
