#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    string s;
    cin >> s;

    // if there are x in a row, you need to take away x - 1
    char tmp = s[0];
    int x = 0;
    int ans = 0;
    for(int i = 0; i < s.length(); i++){
        //cout << x << endl;
        if(s[i] == tmp){
            x++;
            if(x > 1){
                ans++;
            }
        }
        else{
            x = 1;
            tmp = s[i];
        }
    }

    cout << ans << endl;

    return 0;
}
