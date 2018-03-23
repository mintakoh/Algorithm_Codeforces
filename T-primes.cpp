#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;

    bool v[1000001];
    for(int i = 0; i < 1000001; i++) v[i] = true;
    v[0] = false;
    v[1] = false;

    for(int i = 2; i < 1000001; i++) {
        if(v[i]) {
            for(int j = i * 2; j < 1000001; j += i) v[j] = false;
        }
    }

    for(int i = 0; i < n; i++) {
        long long temp;
        cin >> temp;

        double sqrt_temp = sqrt(temp);

        if(sqrt_temp - (int)sqrt_temp == 0) {
           if(v[(int)sqrt_temp]) cout << "YES" << endl;
           else cout << "NO" << endl;
        } else cout << "NO" << endl;
    }

    return 0;
}
