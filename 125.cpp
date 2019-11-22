#include <iostream>
#include <cmath>
using namespace std;
int main() {
	float a,b,h,x, ans=0;
	cin >> a >> b >> h >> x;
	for (float i=a; i<=b; i+=h) {
		ans=x*x+sin(x);
		cout << ans << '\t';
	}
}
