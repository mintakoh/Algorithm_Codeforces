#include <iostream>
#include <string>

using namespace std;

int n;
string s[5] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};

int main() {
	cin >> n;

	int i = 1;
	if(n > 5) {
		while(n > (5 * i)) {
			n -= 5*i;
			i *= 2;
		}
		cout << s[(n - 1) / i];
	} else {
		cout << s[n - 1];
	}

	return 0;
}