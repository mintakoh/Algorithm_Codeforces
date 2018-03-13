#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int max = -1;
	int result = 0;

	for(int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;

		result -= a;
		result += b;

		if(max < result) max = result;
	}

	cout << max << endl;

    return 0;
}
