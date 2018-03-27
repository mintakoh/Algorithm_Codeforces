#include <iostream>
#include <string>

#define TRIM_SPACE " \t\n\v"

using namespace std;

string ReplaceAll(string &str, const string& from, const string& to){
    size_t start_pos = 0;
    while((start_pos = str.find(from, start_pos)) != string::npos)
    {
        str.replace(start_pos, from.length(), to);
        start_pos += to.length();
    }
    return str;
}

string ltrim(string _s, const string& drop = TRIM_SPACE) {
    return _s.erase(0, _s.find_first_not_of(drop));
}

string rtrim(string _s, const string& drop = TRIM_SPACE) {
    return _s.erase(_s.find_last_not_of(drop)+1);
}

int main() {
    string s;
    cin >> s;
    
    s = ltrim(rtrim(ReplaceAll(s, "WUB", " ")));

    for(int i = s.length() - 1; i > 1; i--) {
        if(s[i] == ' ' && s[i - 1] == ' ') {
            s.erase(i, 1);
        }
    }
    
    cout << s << endl;

    return 0;
}