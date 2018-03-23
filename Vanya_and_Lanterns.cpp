#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<long long> v;
    long long n, l;
    cin >> n >> l;

    for(long long i = 0; i < n; i++) {
        long long a;
        cin >> a;

        v.push_back(a);
    }

    sort(v.begin(), v.end());

    long long _first = v[0] - 0;
    long long _last = l - v[n - 1];
    long long _max = 2 * max(_first, _last);
    for(long long i = 0; i < n - 1; i++) {
        long long temp = v[i + 1] - v[i];
        if(temp > _max) _max = temp;
    }

    printf("%lf", _max / (double) 2);
    return 0;
}