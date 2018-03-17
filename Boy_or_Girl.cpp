#include <iostream>
#include <string>

using namespace std;

int temp[26];
int main()
{
    string s;
    cin >> s;

    int count = 0;
    for(int i = 0; i < s.length(); i++) {
        temp[s[i] - 'a']++;
    }

    for(int i = 0; i < 26; i++) {
        if(temp[i] > 0) count++;
    }

    if(count % 2 == 0) cout << "CHAT WITH HER!" << endl;
    else cout << "IGNORE HIM!" << endl;

    return 0;
}
