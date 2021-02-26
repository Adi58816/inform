#include<iostream>
#include<string>
typedef long long ll;
using namespace std;


bool check(ll i) {
	if (i % 3 != 0) return false;
	string s = to_string(i);
	char last = s[s.size() - 1];
	return (last == '2' || last == '4' || last == '8');
}

ll sum;
int main() {
	for (ll i = 31; i < 100; ++i) {
		if (check(i)) sum += i;
	}
	cout << sum;
}
