#include <iostream> 
#include <cmath>
using namespace std;

int main() {
	float cat1, cat2;
	cin >> cat1 >> cat2;
	float area = (cat1*cat2) / 2;
	float hypo = sqrt(cat1*cat1+cat2*cat2);
	cout << area << " " << hypo;
}
