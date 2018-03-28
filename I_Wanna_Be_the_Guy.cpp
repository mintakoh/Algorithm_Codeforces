#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> v1;
	vector<int> v2;
	vector<bool> check;
	check.assign(n, false);

    int p1, p2;
    cin >> p1;
	for(int i = 0; i < p1; i++) {
		int t;
		cin >> t;
		v1.push_back(t);
		check[t - 1] = true;
	}
	
    cin >> p2;
	for(int i = 0; i < p2; i++) {
		int t;
		cin >> t;
		v2.push_back(t);
		check[t - 1] = true;
	}

	bool answer = true;
	for(int i = 0; i < n; i++) {
		if(!check[i]) answer = false;
	}

	if(answer) cout << "I become the guy." << endl;
	else cout << "Oh, my keyboard!" << endl;

    return 0;
}
