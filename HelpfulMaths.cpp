#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;

    int a = 0;
    int b = 0;
    int c = 0;
    for(int i = 0; i < s.length(); i+=2){
        if(s[i] == '1'){
            a++;
        }
        else if(s[i] == '2'){
            b++;
        }
        else{
            c++;
        }
    }

    string x;

    for(int i = 0; i < a; i++){
        x = x + '1' + '+';
    }
    for(int i = 0; i < b; i++){
        x = x + '2' + '+';
    }
    for(int i = 0; i < c; i++){
        x = x + '3' + '+';
    }

    x.pop_back();
    cout << x << endl;
    return 0;
}
