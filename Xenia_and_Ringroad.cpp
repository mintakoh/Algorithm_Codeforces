#include <iostream>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	long long past, result = 0;

	for(int i = 0; i < m; i++) {
		int temp;
		cin >> temp;
		
		if(i == 0) {
			result += (temp - 1);	
		} 
		else {
			if(past > temp) {
				result += (n - past + temp);
			} else {
				result += (temp - past);
			}
		}
		past = temp;
	}

	cout << result;

	return 0;
}