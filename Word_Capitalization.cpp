#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    
    if(s[0] >= 'A' && s[0] <= 'Z');
    else {
        s[0] = s[0] - ('a' - 'A');
    }
    
    cout << s << endl;

    return 0;
}
