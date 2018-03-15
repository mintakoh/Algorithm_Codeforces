#include <iostream>

using namespace std;

bool isLucky(int n) {
    while(n > 0) {
        if(n % 10 == 7 || n % 10 == 4) {
            ;
        } else {
            return false;
        }
        n /= 10;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;

    for(int i = 1; i < n; i++) {
        if((isLucky(i) && n / i == 0) || (isLucky(n / i) && n % i == 0)) {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;

    return 0;
}
