#include <iostream>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    int x = 0;

    int A[n];
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    for(int j = 0; j < n; j++){
        if(A[j] >= A[k - 1] && A[j] > 0){
            x++;
        }
    }

    cout << x << endl;
    return 0;
}
