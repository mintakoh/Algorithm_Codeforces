#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> array;
vector<bool> init;
vector<bool> goal;	
vector<bool> visited;
vector<int> picking;

int n;
bool check1 = false, check2 = false;

void dfs(int num, int count) {
	bool flag = false, check = false;
	visited[num] = true;

	if(count % 2) check = check1;
	else check = check2;

	if(check)
		init[num] = !init[num];

	if(init[num] != goal[num]) {
		if(count % 2) check1 = !check1;
		else check2 = !check2;

		flag = true;
		picking.push_back(num);
	}

	for(int i : array[num]) {
		if(!visited[i]) dfs(i, count + 1);
	}

	if(flag) {
		if(count % 2) check1 = !check1;
		else check2 = !check2;
	}
}

int main() {
	cin >> n;

	array = vector<vector<int>>(n + 1);
	visited = vector<bool>(n + 1, false);

	for(int i = 0; i < n - 1; i++) {
		int u, v;
		cin >> u >> v;

		array[u].push_back(v);
		array[v].push_back(u);
	}
	
	init.push_back(0);
	for(int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		init.push_back(temp);
	}

	goal.push_back(0);
	for(int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		goal.push_back(temp);
	}
	
	dfs(1, 1);

	cout << picking.size() << endl;
	for(int i = 0; i < picking.size(); i++) {
		cout << picking[i] << endl;
	}

	return 0;
}