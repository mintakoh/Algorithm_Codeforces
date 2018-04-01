#include <iostream>
#include <string>
#include <cmath>

using namespace std;

char arr[53][53];
int n, m;
string answer;

// direction => 8 : up // 4 : left // 6 : right // 2 : down
bool dfs(int _i, int _j, int direction, char color) {
	if(abs(arr[_i][_j]) != color) return 0;
	if(-arr[_i][_j] == color) return 1;

	arr[_i][_j] = -color;

	if(_i < (n - 1) && direction != 8 && dfs(_i + 1, _j, 2, color)) return 1;
	if(_j > 0 && direction != 6 && dfs(_i, _j - 1, 4, color)) return 1;
	if(_i > 0 && direction != 2 && dfs(_i - 1, _j, 8, color)) return 1;
	if(_j < (m - 1) && direction != 4 && dfs(_i, _j + 1, 6, color)) return 1;

	arr[_i][_j] = 0;
	return 0;
}

int main() {
	cin >> n >> m;

	answer = "No";
    
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) 
			cin >> arr[i][j];
	}

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) 
			if(arr[i][j] && dfs(i, j, 0, arr[i][j])) {
				answer = "Yes";
			}
	}

	cout << answer;

	return 0;
}