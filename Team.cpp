#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int x = 0;
    int y = 0;

    int A[n][3];
    for(int i = 0; i < n; i++){
        cin >> A[i][0] >> A[i][1] >> A[i][2];
        y = 0;
        for(int j = 0; j < 3; j++){
            y += A[i][j];
        }
        if(y >= 2){
            x++;
        }
    }

    cout << x << endl;

    return 0;
}
