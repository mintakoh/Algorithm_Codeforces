#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	int max = -1;

	int result1 = a + b * c;
	int result2 = a * (b + c);
	int result3 = a * b * c;
	int result4 = (a + b) * c;
	int result5 = a + b + c;
	int result6 = a * b + c;

	if(result1 > max) max = result1;
	if(result2 > max) max = result2;
	if(result3 > max) max = result3;
	if(result4 > max) max = result4;
	if(result5 > max) max = result5;
	if(result6 > max) max = result6;

	cout << max << endl;

    return 0;
}
