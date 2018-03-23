#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
    int n;
    cin >> n;

    long long result1, result2;

    vector<long long> v1;
    for(int i = 0; i < n; i++) {
        long long a;
        cin >> a;
        v1.push_back(a);
    }

    vector<long long> v2;
    for(int i = 0; i < n - 1; i++) {
        long long a;
        cin >> a;
        v2.push_back(a);
    }

    vector<long long> v3;
    for(int i = 0; i < n - 2; i++) {
        long long a;
        cin >> a;
        v3.push_back(a);
    }

    cout << accumulate(v1.begin(), v1.end(), 0) - accumulate(v2.begin(), v2.end(), 0) << endl
        << accumulate(v2.begin(), v2.end(), 0) - accumulate(v3.begin(), v3.end(), 0);


    return 0;
}
