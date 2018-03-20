#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> v;
	int n, m;
	cin >> n >> m;

	for(int i = 0; i < m; i++) {
		int temp;
		cin >> temp;
		v.push_back(temp);
	}

	sort(v.begin(), v.end());

	int min = 10000;
	for(int i = 0; i < m - n + 1; i++) {
		int dif = v[i + n - 1] - v[i];
		if(dif < min) min = dif;
	}

 	cout << min << endl;
    return 0;
}

