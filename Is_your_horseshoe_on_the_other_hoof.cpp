#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v(4);
	for(int i = 0; i < 4; i++) {
		cin >> v[i];
	}

	int count = 0;
	for(int i = 0; i < 4; i++) {
		for(int j = i + 1; j < 4; j++) {
			if(v[i] == v[j]) count++;
		}
	}

	switch(count) {
		case 0:
			cout << 0;
			break;
		case 1:
			cout << 1;
			break;
		case 2:	
		case 3:
			cout << 2;
			break;
		case 6:
			cout << 3;
			break;
	}

    return 0;
}
