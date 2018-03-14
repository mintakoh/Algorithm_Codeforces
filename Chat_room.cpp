#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;

    string diff = "hello";

    int index = 0;
    int count = 0;
    for(int i = 0; i < diff.length(); i++) {
        for(int j = index; j < s.length(); j++) {
            if(diff[i] == s[j]) {
                index = j+1;
                count++;
                break;
            }
        }
    }

    if(index <= s.length() && count == 5)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
