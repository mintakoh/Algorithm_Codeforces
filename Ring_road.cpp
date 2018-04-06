#include <iostream>

int array[105][2];

using namespace std;

int main() {
	int n;
	cin >> n;

	int cost1 = 0, cost2 = 0;
	for(int i = 0; i < n; i++) {
		int a, b, c;
		cin >> a >> b >> c;

		bool flag = false;
		for(int j = 1; j < n + 1; j++) {
			if(array[j][0] == b || array[a][0] != 0){
				flag = true;
				break;
			} 
		}

		if(!flag) {
			array[a][0] = b;
			array[a][1] = c;
			cost1 += c;
		} else {
			array[b][0] = a;
			array[b][1] = c;
			cost2 += c;
		}
	}

	if(cost1 < cost2) cout << cost1;
	else cout << cost2;


	return 0;
}