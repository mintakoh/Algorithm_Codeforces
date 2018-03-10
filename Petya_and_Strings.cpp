#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

int main()
{
    string s1, s2;
    cin >> s1;
    cin >> s2;
    
    for(int i = 0; i < s1.length(); i++) {
        s1[i] = tolower(s1[i]);   
        s2[i] = tolower(s2[i]);   
    }
    
    for(int i = 0; i < s1.length(); i++) {
        if(s1[i] - s2[i] > 0) {
            cout << 1 << endl;
            return 0;
        }
        
        if(s1[i] - s2[i] < 0) {
            cout << -1 << endl;
            return 0;
        }
    }
    
    cout << 0 << endl;
    
    return 0;
}
