#include <iostream>
typedef long long ll;
using namespace std;


int main() {
	for (ll i = 1000; i <= 9999; ++i) {
		if (i % 133 == 125 && i % 134 == 111) cout << i << ' ';
	}
}
