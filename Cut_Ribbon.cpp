#include <iostream>

using namespace std;

int n, a, b, c, result, max_v;

int main() {
	cin >> n >> a >> b >> c;

	for(int i = 0; i < n + 1; i++) {
		for(int j = 0; j < n + 1; j++) {
			int temp = n - (i * a) - (j * b);
			if(temp >= 0 && temp % c == 0) {
				result = i + j + (temp / c);
				if(max_v < result) max_v = result;
			}
		}
	}

	cout << max_v;

	return 0;
}