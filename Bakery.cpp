#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int n, m, k;
int** cities;
vector<int> storage;

int main() {
	cin >> n >> m >> k;

	cities = new int*[m + 1];
	for(int i = 0; i < m + 1; i++) {
		cities[i] = new int[3];
	}

	for(int i = 0; i < m + 1; i++) {
		cities[i][0] = 0;
		cities[i][1] = 0;
		cities[i][2] = 0;
	}

	for(int i = 0; i < m; i++) {
		int u, v, l;
		cin >> u >> v >> l;

		cities[i][0] = u;
		cities[i][1] = v;
		cities[i][2] = l;
	}

	storage.resize(n + 1);
	for(int i = 0; i < k; i++) {
		int a;
		cin >> a;
		storage[a] = 1;
	}

	int answer = 1000000005;

	for(int i = 0; i < m; i++) {
		if(storage[cities[i][0]] + storage[cities[i][1]] == 1) {
			answer = min(answer, cities[i][2]);
		}
	}
	if(answer == 1000000005) answer = -1;
	cout << answer;

	return 0;
}