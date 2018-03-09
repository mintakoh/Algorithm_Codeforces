#include <iostream>

using namespace std;

int main()
{
    int M,N;
    cin >> M >> N;
    
    int y = M / 2;
    int result = y * N;
    
    if(M % 2 == 1) {
        result += N / 2;
    }
    
    cout << result << endl;
    
    
    return 0;
}
