#include <iostream>
using namespace std;

int main(){
    int n, t;
    cin >> n >> t;
    string s;
    cin>>s;

    string x = s;

    for(int i = 0; i < t; i++){
        for(int j = 0; j < n - 1; j++){
            if(s[j] == 'B' && s[j+1]=='G'){
                x[j] = 'G';
                x[j + 1] = 'B';
            }
        }
        s = x;
    }
    cout << x << endl;
    return 0;
}
