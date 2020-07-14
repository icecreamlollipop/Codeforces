#include <iostream>
#include <cstdlib>
using namespace std;

int main(){

    // there are 4 possible moves - up down, left right
    // 1st move it up down to the correct place, then left right to the right place

    int A[5][5];

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> A[i][j];
            if(A[i][j] == 1){
                cout << abs(2 - i) + abs(2 - j) << endl;
                return 0;
            }
        }
    }

    return 0;
}
