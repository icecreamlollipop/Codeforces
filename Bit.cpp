#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    string A[n];

    int x = 0;

    for(int i = 0; i < n; i++){
        cin >> A[i];
        if(A[i][1] == '+'){
            x++;
        }
        else{
            x--;
        }
    }

    cout << x << endl;
    return 0;
}
