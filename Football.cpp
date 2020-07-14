#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;

    int x = 0;
    char tmp = s[0];

    for(int i = 0; i < s.length(); i++){
        //cout << x << endl;
        if(s[i] == tmp){
            x++;
        }
        else{
            x = 1;
            tmp = s[i];
        }
        if(x >= 7){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;

    return 0;
}
