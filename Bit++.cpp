#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, result = 0;
    
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        
        if(s == "++X" || s == "++x" || s == "X++" || s == "x++") result++;
        if(s == "--X" || s == "--x" || s == "X--" || s == "x--") result--;
    }
    
    cout << result << endl;
    
    return 0;
}
