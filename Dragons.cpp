#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

vector<int> dragon;
vector<int> bonus;

int main() {
	int s, n;
	cin >> s >> n;

    bonus.assign(10005, -1);
	string answer = "NO";
	for(int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;

		if(bonus[x] == -1) {
		    dragon.push_back(x);
		    bonus[x] = 0;
		}
		bonus[x] += y;
	}

	sort(dragon.begin(), dragon.end());

	for(int i = 0; i < dragon.size(); i++) {
		if(s > dragon[i]) {
			s += bonus[dragon[i]];
			answer = "YES";
		} else {
			answer = "NO";
			break;
		}
	}

	cout << answer;
    
	return 0;
}