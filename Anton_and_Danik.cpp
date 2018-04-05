#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	cin >> n;

	string s;
	cin >> s;

	int anton = 0, danik = 0;
	for(int i = 0; i < s.length(); i++) {
		if(s[i] == 'A') anton++;
		else if(s[i] == 'D') danik++;
	}

	if(anton > danik) cout << "Anton";
	else if(anton == danik) cout << "Friendship";
	else cout << "Danik";

    return 0;
}
