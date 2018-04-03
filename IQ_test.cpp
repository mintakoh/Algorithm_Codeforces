#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v;
    for(int i = 0; i < n; i++) {
    	int temp;
    	cin >> temp;

    	v.push_back(temp);
    }

    bool flag = v[0] % 2;
    if(v[0] % 2 == v[1] % 2 && v[1] % 2 == v[2] % 2) {
	    for(int i = 3; i < n; i++) {
	    	bool temp = v[i] % 2;
	    	if(temp != v[0] % 2) {
	    		cout << i + 1;
	    		break;
	    	}
	    }    	
    } else {
    	if(v[0] % 2 != v[1] % 2 && v[1] % 2 == v[2] % 2) cout << 1 << endl;
    	else if(v[0] % 2 == v[1] % 2 && v[1] % 2 != v[2] % 2) cout << 3 << endl;
    	else if(v[0] % 2 == v[2] % 2 && v[1] % 2 != v[2] % 2) cout << 2 << endl;
    }


    return 0;
}
