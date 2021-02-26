#include <iostream>
typedef long long ll;
using namespace std;


int main() {
	for (ll i = 100; i <= 999; ++i) {
		if (i % 43 == 47 && i % 47 == 43) cout << i << ' ';
	}
}
