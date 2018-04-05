#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	int temp = a;
	while(a >= b) {
		a -= (b - 1);
		temp++;
	}

	cout << temp << endl;

    return 0;
}
