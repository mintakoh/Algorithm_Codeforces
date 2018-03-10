#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    
    if(s.length() < 7) {
        cout << "NO" << endl;
        return 0;
    }
    
    for(int i = 0; i < s.length() - 6; i++) {
        int count_0 = 0;
        int count_1 = 0;
        for(int j = 0; j < 7; j++) {
            if(s[i + j] == '0') count_0++;
            if(s[i + j] == '1') count_1++;
        }
        if(count_0 >= 7 || count_1 >= 7) {
            cout << "YES" << endl;
            return 0;
        }
    }
    
    cout << "NO" << endl;
    
    return 0;
}
