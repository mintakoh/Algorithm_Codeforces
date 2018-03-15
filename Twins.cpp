#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v;
    int n;
    cin >> n;

    int total = 0;
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        v.push_back(a);
        total += a;
    }

    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    int my_sum = 0;
    for(int i = 0; i < n; i++) {
        my_sum += v[i];
        if(my_sum > total / 2) {
            cout << i+1 << endl;
            return 0;
        }
    }

    cout << 0 << endl;

    return 0;
}
