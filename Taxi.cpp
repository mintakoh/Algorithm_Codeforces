#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v;
    v.assign(5, 0);

    for(int i = 0; i < n; i++) {
        int temp;
        cin >> temp;

        v[temp]++;
    }

    int result = v[4];

    if(v[3] >= v[1]) {
        result += v[3];
        v[1] = 0;
    }
    else {
        result += v[3];
        v[1] -= v[3];
    }

    if(v[2] % 2 == 0) {
        v[2] /= 2;
        result += v[2];
    }
    else {
        v[2] = (v[2] + 1) / 2;
        result += v[2];
        v[1] -= 2;
    }


    result += ceil(v[1] / 4.0);

    cout << result << endl;

    return 0;
}

// 2 2 2 1 1 1 1