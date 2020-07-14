#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main(){

    string a, b;
    cin >> a >> b;

    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);

    if(a == b){
        cout << 0 << endl;
        return 0;
    }

    for(int i = 0; i < a.length(); i++){
        if(a[i] < b[i]){
            cout << -1 << endl;
            return 0;
        }
        else if(a[i] > b[i]){
            cout << 1 << endl;
            return 0;
        }
    }

    return 0;
}
