#include <iostream>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	if(n < m) {
		cout << n << endl;
	} else if(n == m) {
		cout << n + 1 << endl;
	} else {
	    int temp1, temp2, result = n;
		while(n >= m) {
			temp1 = n / m;
			temp2 = n % m;
			result += temp1;
			n = temp1 + temp2;
		}
    	cout << result << endl;
	}

    return 0;
}
