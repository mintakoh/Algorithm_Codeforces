#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

long long n;
long long _count[100005];
long long result[100005];

int main() {
	cin >> n;

	vector<long long> v;
	for(long long i = 0; i < n; i++) {
		long long temp;
		cin >> temp;

		v.push_back(temp);
		_count[temp]++;
	}

	result[0] = 0;
	result[1] = _count[1];

	sort(v.begin(), v.end());
	long long maximum = v[v.size() - 1];

	for(long long i = 2; i <= maximum; i++) {
	    long long curr_val = result[i - 2] + _count[i] * i;
	    long long past_val = result[i - 1];
		result[i] = max(curr_val, past_val);
	}

	cout << result[maximum];

	return 0;
}