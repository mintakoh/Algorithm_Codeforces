#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    vector<int> v;
    cin >> s;
    
    if(s.length() == 1) {
        cout << s << endl;
        return 0;
    }
    
    for(int i = 0; i < s.length(); i = i + 2) {
        v.push_back(s[i]);
    }
    

    sort(v.begin(), v.end());

    for(int i = 0; i < v.size(); i++) {
        cout << (char)v[i];
        if(i != v.size() - 1) {
            cout << "+";
        }
    }

    return 0;
}
