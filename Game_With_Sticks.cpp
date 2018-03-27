#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, m, count = 0;
    cin >> n >> m;

    int temp = min(n, m);
    
    if(temp % 2 == 0) cout << "Malvika" << endl;
    else cout << "Akshat" << endl;

    return 0;
}