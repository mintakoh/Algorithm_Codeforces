#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<char> v;
    int n, t;
    cin >> n >> t;

    string s;
    cin >> s;
    
    for(int i = 0; i < s.length(); i++) {
        v.push_back(' ');
    }

    for(int i = 0; i < t; i++) {
        for(int j = 0; j < s.length(); j++) {
            if(j < s.length() - 1 && s[j] == 'B' && s[j+1] == 'G') {
                v[j] = 'G';
                v[j+1] = 'B';
                j++;
            }
            else {
                v[j] = s[j];
            }
            
        }
        
        for(int i = 0; i < v.size(); i++) {
            s[i] = v[i];
        }
    }
    
    for(int i = 0; i < v.size(); i++)
        cout << v[i];
    cout << endl;

    return 0;
}
