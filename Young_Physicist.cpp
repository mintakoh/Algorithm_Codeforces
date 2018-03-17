#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
	vector<int> x;
	vector<int> y;
	vector<int> z;

    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
    	int x_input, y_input, z_input;
    	cin >> x_input >> y_input >> z_input;

    	x.push_back(x_input);
    	y.push_back(y_input);
    	z.push_back(z_input);
    }
    
    if(accumulate(x.begin(), x.end(), 0) == 0 && 
    	accumulate(y.begin(), y.end(), 0) == 0 && 
    	accumulate(z.begin(), z.end(), 0) == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    return 0;
}
