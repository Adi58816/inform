#include <iostream>
typedef long long ll;
using namespace std;


ll n, s, amount;
int main() {
	while (true) {
		cin >> n;
		if (n == 0) break;
		s += n;
		amount++;
	}
	cout << s << ' ' << amount;
}
