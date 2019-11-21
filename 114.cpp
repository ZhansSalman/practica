#include <iostream>
using namespace std;
int main() {
	for (int i=1; i<=30; i++) {
		if (i%2==1) {
			for (int j=1; j<=i; j++) {
				cout << j;
			} cout << endl;
		} else if (i%2==0) {
			for (int k=1; k<=5; k++) {
				cout << "1";
			} cout << endl;
		}
	}
}
