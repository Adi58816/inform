#include <iostream>
typedef long long ll;
using namespace std;


bool check(ll i);


ll n;
int main() {
	cin >> n;
	for (ll i = 10; i <= 99; ++i) {
		if (check(i)) cout << i << ' ';
	}
}

bool check(ll i) {
	if (i % n == 0) return true;
	while (i > 0) {
		if (i % 10 == n) return true;
		i /= 10;
	}
	return false;
}
