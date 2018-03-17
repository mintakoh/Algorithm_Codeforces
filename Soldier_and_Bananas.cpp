#include <iostream>

using namespace std;

int main()
{
    int k, n, w;
    cin >> k >> n >> w;

    int result = 0;

    for(int i = 1; i <= w; i++) {
        result += (k * i);
    }

    if(result - n > 0) cout << result - n << endl;
    else cout << 0 << endl;
    

    return 0;
}
