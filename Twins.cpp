#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    int A[n];

    double sum = 0;
    for(int i=0; i<n; i++){
        cin >> A[i];
        sum += A[i];
    }
    sort(A, A+n);

    int mine = 0;
    int count = 0;
    double half = sum/2;
    for(int i=n-1; i>=0; i--){
        mine += A[i];
        count++;
        if(mine > half){
            cout << count << endl;
            return 0;
        }
    }

    return 0;
}
