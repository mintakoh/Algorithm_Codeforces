#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int k2, k3, k5, k6;
    cin >> k2 >> k3 >> k5 >> k6;

    int result = 0;
    int temp = min(k2, min(k5, k6));

    if(temp != 0)
        result += temp * 256;
    
    k2 -= temp;
    temp = min(k2, k3);
    
    if(temp != 0)
        result += temp * 32;
        
    cout << result << endl;

    return 0;
}
