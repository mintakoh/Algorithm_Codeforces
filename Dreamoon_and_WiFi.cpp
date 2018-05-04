#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

string s1, s2;
double result;

int main() {
	cin >> s1;
	cin >> s2;

	int t1[2] = { 0, 0 };
	for(int i = 0; i < s1.length(); i++) {
		if(s1[i] == '+') t1[0]++;
		else if(s1[i] == '-') t1[1]++;
	}

	int t2[2] = { 0, 0 };
	int count = 0;
	for(int i = 0; i < s2.length(); i++) {
		if(s2[i] == '+') t2[0]++;
		else if(s2[i] == '-') t2[1]++;
		else if(s2[i] == '?') {
			count++;
		}
	}

	int plus = t1[0] - t2[0];
	int minus = t1[1] - t2[1];

    // cout << plus << " " << minus << endl;
    if(plus >= 0 && minus >= 0) {
    	vector<char> v;
    	for(int i = 0; i < plus; i++) {
    		v.push_back('+');
    	}
    	for(int i = 0; i < minus; i++) {
    		v.push_back('-');
    	}
		int p_count = 0;
    	do {
    		p_count++;
    	} while(next_permutation(v.begin(), v.end()));
    
        result = p_count / pow(2, count);
    }

	cout.precision(12);
	cout << result;

	return 0;
}