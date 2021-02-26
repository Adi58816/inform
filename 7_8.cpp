#include <iostream>
typedef long long ll;
using namespace std;


bool check(ll n);


ll x;
int main() {
	cin >> x;
	for (ll i = 100; i <= 500; ++i) {
		if (check(i)) cout << i << ' ';
	}
}


bool check(ll n) {
	ll s = 0;
	while (n > 0) {
		s += n % 10;
		n /= 10;
	}
	return s == x;
}
