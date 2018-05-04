#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string sherlock;
string moriaty;
int n;

int main() {
	cin >> n;
	cin >> sherlock;
	cin >> moriaty;

	vector<int> s_vector;
	vector<int> m_vector;

	for(int i = 0; i < n; i++) {
		s_vector.push_back(sherlock[i] - '0');
		m_vector.push_back(moriaty[i] - '0');
	}

	sort(s_vector.begin(), s_vector.end());
	sort(m_vector.begin(), m_vector.end());

	reverse(s_vector.begin(), s_vector.end());
	reverse(m_vector.begin(), m_vector.end());

	int min_result = 0;
	int max_result = 0;

    vector<int> copy_s(n);
    for(int i = 0; i < n; i++) {
        copy_s[i] = s_vector[i];
    }

	if(n == 1) {
		if(m_vector[0] > s_vector[0]) max_result++;
		if(m_vector[0] <= s_vector[0]) min_result++;
	} else {
		for(int i = 0; i < n; i++) {
		    bool flag = false;
			for(int j = i; j < n; j++) {
				if(m_vector[i] >= copy_s[j]) {
				    copy_s[j] += 10;
				    flag = false;
					break;
				} else {
				    flag = true;
				}
			}
			if(flag) min_result++;
		}

		for(int i = 0; i < n; i++) {
			for(int j = i; j < n; j++) {
				if(m_vector[i] > s_vector[j]) {
					max_result++;
					s_vector[j] += 10;
					break;
				}
			}
		}
	}

	cout << (min_result) << endl << max_result;

	return 0;
}