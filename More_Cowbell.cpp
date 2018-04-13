#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int n, k, count;

int main() {
	cin >> n >> k;

	vector<int> v;
	for(int i = 0; i < n; i++) {
		int s;
		cin >> s;
		v.push_back(s);
	}

	int _max = v[n - 1];
	for(int i = n - k - 1; i >= 0; i--) {
		_max = max(v[i] + v[(n - k) + (n - k) - i - 1], _max);
	}

	cout << _max;


	return 0;
}