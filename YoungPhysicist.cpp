#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int A[n][3];

    int x = 0;
    int y = 0;
    int z = 0;

    for(int i = 0; i < n; i++){
        cin >> A[i][0] >> A[i][1] >> A[i][2];
        x+= A[i][0];
        y+= A[i][1];
        z+= A[i][2];
    }

    if(x == 0 && y == 0 && z == 0){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }

    return 0;
}
