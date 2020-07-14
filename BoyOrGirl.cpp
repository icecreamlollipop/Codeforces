#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;

    int A[26] = {0};

    // distinct chars
    int n = s.length();
    for(int i = 0; i < n; i++){
        A[s[i] - 97] = 1;
    }
    int x = 0;
    for(int i = 0; i < 26; i++){
        if(A[i] == 1){
            x++;
        }
    }

    if(x % 2 == 0){
        cout << "CHAT WITH HER!" << endl;
    }
    else{
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}
