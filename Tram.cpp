#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int A[n][2];
    int x = 0;
    int B[n];
    for(int i = 0; i < n; i++){
        cin >> A[i][0] >> A[i][1];
        x -= A[i][0];
        x += A[i][1];
        B[i] = x;
    }
    int max = B[0];
    for(int i = 0; i < n; i++){
        //cout << B[i] << endl;
        if(B[i] > max){
            max = B[i];
        }
    }
    cout << max << endl;
    return 0;
}
