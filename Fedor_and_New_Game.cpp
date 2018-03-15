#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;
    int n, m, k;
    int result = 0;
    cin >> n >> m >> k;

    for(int i = 0; i < m + 1; i++) {
        int xi;
        cin >> xi;

        v.push_back(xi);
    }

    vector<int> Fedor;
    int temp = v[m];
    for(int i = 0; i < n; i++) {
        Fedor.push_back(temp % 2);
        temp /= 2;
    }
    
    for(int i = 0; i < m; i++) {
        int count = 0;
        int temp = v[i];
        vector<int> temp_v;
        
        for(int j = 0; j < n; j++) {
            if(Fedor[j] != (temp % 2)) count++;
            temp /= 2;
        }
        if(count <= k) result++;
    }
    
    
    cout << result << endl;

    return 0;
}


