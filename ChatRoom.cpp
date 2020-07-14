#include <iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n = s.length();
    int A[5] = {0};

    for(int i = 0; i < n; i++){
        if(s[i] == 'h'){
            A[0] = 1;
        }
        else if(s[i] == 'e' && A[0] == 1){
            A[1] = 1;
        }
        else if(s[i] == 'l'){
            if(A[1] == 1 && A[2] == 0){
                A[2] = 1;
            }
            else if(A[2] == 1){
                A[3] = 1;
            }
        }
        else if(s[i] == 'o' && A[3] == 1){
            A[4] = 1;
        }
    }
    for(int i = 0; i < 5; i++){
        if(A[i] == 0){
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    return 0;
}
