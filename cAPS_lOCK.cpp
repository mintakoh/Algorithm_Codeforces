#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int flag = -1;

    for(int i = 1; i < s.length(); i++) {
        if(s[0] >= 'a' && s[0] <= 'z') {
            if(s[i] >= 'A' && s[i] <= 'Z') flag = 1;
            else {
                flag = -1;
                break;
            }
        } else {
            if(s[i] >= 'A' && s[i] <= 'Z') flag = 2;
            else {
                flag = -1;
                break;
            }
        }
    }
    if(s.length() == 1 && (s[0] >= 'a' && s[0] <= 'z')) flag = 1;
    if(s.length() == 1 && (s[0] >= 'A' && s[0] <= 'Z')) flag = 2;
    
    if(flag == 1) {
        string s2 = s.substr(1, s.length()-1);
        s[0] = toupper(s[0]);
        for(int i = 0; i < s2.length(); i++)
            s2[i] = tolower(s2[i]);
        cout << s[0] << s2 << endl;
        return 0;
    }
    else if(flag == 2) {
        for(int i = 0; i < s.length(); i++)
            s[i] = tolower(s[i]);
        cout << s << endl;
        return 0;
    }
    cout << s << endl;

    return 0;
}
