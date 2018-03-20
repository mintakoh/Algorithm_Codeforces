#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	cin >> s;

	string t;
	cin >> t;

	for(int i = 0; i < s.length(); i++) {
		if(s[i] != t[t.length() - 1 - i]) { 
			cout << "NO" << endl;
			return 0;
		}
	}

	cout << "YES" << endl;

    return 0;
}
