#include <iostream>
#include <string>

using namespace std;

int alphabet[26];

int main()
{
	string s;
	getline(cin, s);

	int count = 0;
	for(int i = 0; i < s.length(); i++) {
		if(s[i] >= 'a' && s[i] <= 'z') alphabet[s[i] - 'a']++;
	}

	for(int i = 0; i < 26; i++) {
		if(alphabet[i] != 0) count++;
	}
	cout << count << endl;

    return 0;
}
