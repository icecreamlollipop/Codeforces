#include <iostream>
#include <string>
using namespace std;

int main(){
    //(10, inf) too long
    int n;
    cin >> n;
    string A[n];
    for(int i = 0; i < n; i++){
        cin >> A[i];
        int l = A[i].length();
        if(l <= 10){
            cout << A[i] << endl;
        }
        else{
            cout << A[i][0] + to_string(l - 2) + A[i][l - 1] << endl;
        }
    }
    return 0;
}
