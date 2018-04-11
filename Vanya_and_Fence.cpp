#include <iostream>

using namespace std;

int main() {
	int n, h;
	cin >> n >> h;

	int result = 0;
	for(int i = 0; i < n; i++) {
		int temp;
		cin >> temp;

		if(temp > h) result += 2;
		else result += 1;
	}

	cout << result;

	return 0;
}