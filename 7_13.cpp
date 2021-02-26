#include <iostream>
#include <vector>
typedef long long ll;
using namespace std;


int main() {
	ll n, d;
	cin >> n >> d;
	vector<ll> v;
	for (ll i = 1; i <= n; ++i) {
		if (n % i == 0) {
			v.push_back(i);
			cout << i << ' ';
		}
	}
	cout << endl;
	ll s = 0;
	for (ll elem : v) {
		s += elem;
	}
	cout << s << endl;
	ll s2 = 0;
	for (ll elem : v) {
		if (elem % 2 == 0) s2 += elem;
	}
	cout << s2 << endl;
	cout << v.size() << endl;
	ll a1 = 0;
	for (ll elem : v) {
		if (elem % 2 == 1) a1 ++;
	}
	cout << a1 << endl;
	ll a2 = 0;
	for (ll elem : v) {
		if (elem % 2 == 0) a2++;
	}
	cout << a2 << endl;
	ll cnt = 0;
	for (ll elem : v) {
		if (elem > d) cnt++;
	}
	cout << cnt;
}
