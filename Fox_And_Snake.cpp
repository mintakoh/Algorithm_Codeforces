#include <iostream>

using namespace std;

int n, m;

int main() {
	cin >> n >> m;

	for(int i = 1; i < n + 1; i++) {
		for(int j = 1; j < m + 1; j++) {
			if(i % 2 == 1) cout << "#";
			else {
				if(i % 4 == 0) {
					if(j == 1) cout << "#";
					else cout << ".";
				} else {
					if(j == m) cout << "#";
					else cout << ".";
				}
			}
		}
		cout << endl;
	}

	return 0;
}