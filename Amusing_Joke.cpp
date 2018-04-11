#include <iostream>
#include <string>

using namespace std;

int alphabet1[26];
int alphabet2[26];
int count;

int main() {
	string s1, s2, s3;
	cin >> s1 >> s2 >> s3;

	for(int i = 0; i < s1.length(); i++) {
		alphabet1[s1[i] - 'A']++;
	}

	for(int i = 0; i < s2.length(); i++) {
		alphabet1[s2[i] - 'A']++;
	}

	for(int i = 0; i < s3.length(); i++) {
		alphabet2[s3[i] - 'A']++;
	}

	for(int i = 0; i < 26; i++) {
		if(alphabet1[i] == alphabet2[i]) count++;
	}

	if(count == 26) cout << "YES";
	else cout << "NO";

	return 0;
}