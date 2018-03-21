#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> a;
	int n;
	cin >> n;

	for(int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		a.push_back(temp);
	}

    int max = 1;
	int count = 1;
	for(int i = 0; i < n - 1; i++) {
		if(a[i] <= a[i+1]) count++;
		else count = 1;
		
		if(count > max) max = count;
	}

	cout << max << endl;

    return 0;
}
