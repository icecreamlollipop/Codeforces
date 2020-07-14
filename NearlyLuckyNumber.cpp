#include <iostream>
#include <string>
using namespace std;

int main(){
    string n;
    cin>>n;

    int count =0;
    int x = n.length();
    for(int i = 0; i < x; i++){
        if(n[i] == '4' || n[i] == '7'){
            count++;
        }
    }

    string a = to_string(count);
    int m = a.length();
    for(int i = 0; i < m; i++){
        if(a[i] != '4' && a[i] != '7'){
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";

    return 0;
}
