#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;
    int n, k, count = 0;
    
    
    cin >> n >> k;
    
    for(int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    
    for(int i = 0; i < n; i++) {
        if(v[i] > 0 && v[i] >= v[k-1]) {
            count++;
        }
    }
    
    cout << count << endl;
    
    return 0;
}
