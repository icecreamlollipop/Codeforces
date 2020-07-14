#include <iostream>
using namespace std;

int main(){
    string p;
    cin >> p;
    int n = p.length();
    int A[3] = {0};
    for(int i = 0; i<n; i++){
        if(p[i] == 'H'){
            A[0] = 1;
        }
        else if(p[i] == 'Q'){
            A[1] = 1;
        }
        else if(p[i] == '9'){
            A[2] = 1;
        }
    }

    if(A[0] == 0 && A[1] == 0 && A[2] == 0){
        cout << "NO\n";
    }
    else{
        cout << "YES\n";
    }
    return 0;
}
