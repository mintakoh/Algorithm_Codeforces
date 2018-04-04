#include <iostream>

using namespace std;

int h_uniform[100];
int a_uniform[100];

int main()
{
	int n;
	cin >> n;

	for(int i = 0; i < n; i++) {
		cin >> h_uniform[i] >> a_uniform[i];
	}

	int count = 0;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			if(h_uniform[i] == a_uniform[j]) count++;
		}
	}

	cout << count << endl;

    return 0;
}
