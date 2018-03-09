#include <iostream>

using namespace std;

int main()
{
    int n, count = 0;
    
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        int temp[3] = { 0, 0, 0 };
        for(int j = 0; j < 3; j++) {
            cin >> temp[j];
        }
        
        int result = 0;
        for(int j = 0; j < 3; j++) {
            result += temp[j];
        }
        
        if(result >= 2) count++;
    }
    
    cout << count << endl;
    
    return 0;
}
