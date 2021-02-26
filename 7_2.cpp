#include <iostream>
typedef long long ll;
using namespace std;


int main() {
	ll a, b, c;
	cin >> a >> b >> c;
	for (ll i = a; i <= b; ++i) {
		if (i % c == 0) cout << i << ' ';
	}
}
