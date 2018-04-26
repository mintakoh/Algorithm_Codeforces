#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int n;

int main() {
	cin >> n;
	
	vector<long long> v;
	v.resize(n + 1);

	for(int i = 0; i < n; i++) {
		long long temp;
		cin >> temp;

		v[i] = temp;
	}

	vector<long long> cal;
	vector<long long> re_cal;
	cal.resize(n + 1);
	re_cal.resize(n + 1);

	for(int i = 0; i < n - 1; i++) {
		cal[i] = abs(v[i] - v[i + 1]);
	}

	long long result = 0, val = 0;
	for(int i = 0; i < n; i++) {
		if(i % 2 == 1) {
			re_cal[i] = -cal[i];
		} else {
			re_cal[i] = cal[i];
			cal[i] = -cal[i];
		}
	}

	for(int i = 0; i < n; i++) {
		if(val + cal[i] >= 0) val += cal[i];
		else val = 0;
		result = max(val, result);
	}

	val = 0;
	for(int i = 0; i < n; i++) {
		if(val + re_cal[i] >= 0) val += re_cal[i];
		else val = 0;
		result = max(val, result);
	}

	cout << result;

	return 0;
}