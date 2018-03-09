#include <iostream>
#include <string>
#include <cstring>
#include <ctype.h>

using namespace std;

char exceptList[6] = {'a', 'o', 'y', 'e', 'u', 'i'};
char s_t[200];

int main() {
    string s;
    cin >> s;
    
    for(int i = 0; i < s.length(); i++) {
        s[i] = tolower(s[i]);   
    }
    
    for(int i = 0; i < s.length(); i++) {
        bool flag = false;
        for(int j = 0; j < 6; j++) {
            if(s[i] == exceptList[j]) {
                flag = true;
                break;
            }
        }
        if(!flag) {
            s_t[strlen(s_t)] = '.';
            s_t[strlen(s_t)] = s[i];
        }
    }
    
    for(int i = 0; i < strlen(s_t); i++) {
        cout << s_t[i];
    }
    
    return 0;
}