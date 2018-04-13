#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>

using namespace std;

int n, p;
vector<int> tank;
vector<int> tab;
vector<int> pipe;

vector<int> visited;

int diameter[1005][1005];

pair<int,int> convey(int start, int minimum) {
    if(pipe[start] == 0) 
        return make_pair(start, minimum);
	for(int i = 0; i < visited.size(); i++) {
		if(visited[i] == start) {
			return make_pair(0, 0);
		}
	}
	visited.push_back(start);
	int temp = diameter[start][pipe[start]];
	
	return convey(pipe[start], min(minimum, temp));
}

int main() {
	cin >> n >> p;

	pipe.resize(n + 1);
	for(int i = 0; i < p; i++) {
		int a, b, d;
		cin >> a >> b >> d;

		tank.push_back(a);
		tab.push_back(b);
		pipe[a] = b;
		diameter[a][b] = d;
	}

	sort(tank.begin(), tank.end());
	sort(tab.begin(), tab.end());

	vector<int> v(n + n + 2);
	vector<int>::iterator it = set_difference(tank.begin(), tank.end(), tab.begin(), tab.end(), v.begin());

	v.resize(it - v.begin());

	pair<int, int> result;
	
	vector<pair<int, pair<int, int>>> answer;
	for(int i = 0; i < v.size(); i++) {
		visited.clear();
		result = convey(v[i], 1000000);
		answer.push_back(make_pair(v[i], result));
	}
	
	sort(answer.begin(), answer.end());

	cout << answer.size() << endl;
	for(int i = 0; i < answer.size(); i++) {
	    cout << answer[i].first << " " << answer[i].second.first << " " << answer[i].second.second << endl;
	}

	return 0;
}