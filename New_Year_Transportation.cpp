#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	string answer = "NO";
	int n, t;
	cin >> n >> t;

	vector<int> v(n);
	for(int i = 1; i < n; i++) {
		int temp;
		cin >> temp;

		v[i] = temp;
	}

	int result = 1;
	for(int i = 1; i < n + 1; i) {
	    if(result > t) break;
		if(result == t) {
			answer = "YES";
			break;
		}
		result += v[i];
		i += v[i];
	}
    
    cout << answer;
	return 0;
}