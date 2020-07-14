#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cin >> s;
    if(s[0] > 95){
        s[0] -= 32;
    }
    cout << s << endl;
    return 0;
}
