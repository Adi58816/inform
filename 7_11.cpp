#include<iostream>
#include<string>
typedef long long ll;
using namespace std;


bool check(ll i) {
	string s = to_string(i * i);
	string ss = s.substr(s.size() - 3, s.size());
	return ss == to_string(i);
}

bool check2(ll i) {
	if (i % 7 != 0) return false;
	ll s = 0;
	while (i > 0) {
		s += i % 10;
		i /= 10;
	}
	return (s % 7 == 0);
}


int main() {
	for (ll i = 100; i <= 999; ++i) {
		if (check(i)) cout << i << ' ';
	}
	cout << endl;
	for (ll i = 100; i <= 999; ++i) {
		if (check2(i)) cout << i << ' ';
	}
}
