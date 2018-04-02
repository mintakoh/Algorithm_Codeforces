#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int count_UPPER = 0;
    int count_lower = 0;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] >= 'a' && s[i] <= 'z') count_lower++;
        else if(s[i] >= 'A' && s[i] <= 'Z') count_UPPER++;
    }

    if(count_UPPER > count_lower) {
        for(int i = 0; i < s.length(); i++) { 
            s[i] = toupper(s[i]);
        }
    }
    else {
        for(int i = 0; i < s.length(); i++) { 
            s[i] = tolower(s[i]);
        }
    }

    cout << s << endl;

    return 0;
}
