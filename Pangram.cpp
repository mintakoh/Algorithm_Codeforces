#include <iostream>
#include <string>

using namespace std;

bool alphabet[26];

int main() {
	int n;
	cin >> n;

	string s;
	cin >> s;

	for(int i = 0; i < s.length(); i++) {
		if(s[i] >= 'A' && s[i] <= 'Z')
			alphabet[s[i] - 'A'] = true;
		if(s[i] >= 'a' && s[i] <= 'z')
			alphabet[s[i] - 'a'] = true;
	}

	int count = 0;
	for(int i = 0; i < 26; i++) {
		count += alphabet[i];
	}

	if(count == 26) cout << "YES";
	else cout << "NO";
    
	return 0;
}