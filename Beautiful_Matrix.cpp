#include <iostream>
#include <cstdlib>

using namespace std;

int Matrix[5][5];
int main()
{
	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 5; j++) {
			cin >> Matrix[i][j];
		}
	}

	int result = 0;
	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 5; j++) {
			if(Matrix[i][j] == 1) result = abs(i - 2) + abs(j - 2);
		}
	}
	
	cout << result << endl;

    return 0;
}
