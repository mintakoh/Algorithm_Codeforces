#include <iostream>


using namespace std;


int main() {
    
	int w;

    
	cin >> w;
    
    

	if((w % 2) == 0) {
        
		int a = w/2;
		int b = w/2;
		
		while(true) {
			if((a % 2) == 0 && (b % 2) == 0) {
				cout << "YES" << endl;
				return 0;
			}
			if(a == 2 || a == 1) break;
			a = a - 1;
			b = b + 1;
		} 
	}
    
    
	cout << "NO" << endl;
    
    
	return 0;

}