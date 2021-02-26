#include <iostream>
typedef long long ll;
using namespace std;


int main() {
	ll s = 0;
	for (ll i = 1; i <= 50; i+=2) {
		s += i;
	}
	cout << s;
}
