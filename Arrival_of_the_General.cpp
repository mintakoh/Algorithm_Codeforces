#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> v;
	for(int i = 0; i < n; i++) {
		int temp;
		cin >> temp;

		v.push_back(temp);
	}

	int max_index = 0, min_index = 0;
	for(int i = 0; i < n; i++) {
		if(v[i] > v[max_index]) max_index = i;
		if(v[i] <= v[min_index]) min_index = i;
	}

	if(min_index > max_index) cout << n - (min_index - max_index) - 1 << endl;
	else cout << n - (min_index - max_index) - 2 << endl;

    return 0;
}
