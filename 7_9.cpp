#include <iostream>
typedef long long ll;
using namespace std;


bool check(ll i) {
	ll s = 0;
	while (i > 0) {
		s += pow(i % 10, 2);
		i /= 10;
	}
	return s % 13 == 0;
}

bool check2(ll i) {
	ll s = 0;
	while (i > 0) {
		s += i % 10;
		i /= 10;
	}
	return s + (s * s) == i;
}


int main() {
	for (ll i = 10; i <= 99; ++i) {
		if (check(i)) cout << i << ' ';
	}
	cout << endl;
	for (ll i = 10; i <= 99; ++i) {
		if (check2(i)) cout << i << ' ';
	}
}
