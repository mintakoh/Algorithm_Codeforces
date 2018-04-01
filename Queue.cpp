#include <iostream>

using namespace std;

int array1[2000005], array2[2000005];

int main()
{
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;

        array1[a] = b;
        array2[a]++;
        array2[b]--;
    }

    int num = 0;
    for(; array2[num] != 1; num++);

    int x1 = num;
    int x2 = array1[0];

    while(x1 && x2) {
        cout << x1 << " " << x2 << " ";
        x1 = array1[x1];
        x2 = array1[x2];
    }
    if(x1) cout << x1;

    return 0;
}
