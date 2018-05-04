#include <iostream>
#include <vector>

using namespace std;

int n;

int main() {
	cin >> n;

	vector<int> x;
	vector<int> h;
	for(int i = 0; i < n; i++) {
		int x_v, h_v;
		cin >> x_v >> h_v;

		x.push_back(x_v);
		h.push_back(h_v);
	}
	
	int count = 2;

	for(int i = 1; i < n - 1; i++) {
		if(x[i - 1] < x[i] - h[i]) {
			count++;
		} else {
			if(x[i + 1] > x[i] + h[i]) {
				count++;
				x[i] += h[i];
			}
		}
	}

	if(n == 1) count = 1;
	cout << count;

	return 0;
}