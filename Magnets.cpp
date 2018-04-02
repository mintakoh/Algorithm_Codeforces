#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<string> v;
    for(int i = 0; i < n; i++) {
        string temp;
        cin >> temp;

        v.push_back(temp);
    }

    int count = 1;
    for(int i = 0; i < n - 1; i++) {
        if(v[i][1] == v[i + 1][0]) {
            count++;
        } 
    }

    cout << count << endl;


    return 0;
}
