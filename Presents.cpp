#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> present;
	int n;
	cin >> n;

	present.reserve(n);
	for(int i = 0; i < n; i++) {
		int p;
		cin >> p;
		present[p - 1] = i + 1;
	}

	for(int i = 0; i < n; i++) {
		cout << present[i] << " ";
	}

    return 0;
}
