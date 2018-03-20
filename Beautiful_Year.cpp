#include <iostream>

using namespace std;

bool check_distinct(int y) {
	int year[4] = { (y/1000)%10 , (y/100)%10, (y/10)%10, y%10 };

	bool flag = false;
	for(int i = 0; i < 4; i++) {
		for(int j = i + 1; j < 4; j++) {
			if(year[i] != year[j]) flag = true;
			else return false;
		}
	}

	return flag;
}

int main()
{
	int y;
	cin >> y;

	while(!check_distinct(y + 1)) {
		y++;
	}
	cout << y + 1 << endl;

    return 0;
}
