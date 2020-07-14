#include <iostream>
using namespace std;

int main(){
    int k, n, w;
    cin >> k >> n >> w;

    int x = 0;
    for(int i = 1; i < w + 1; i++){
        x = x + i*k;
    }

    if(x <= n){
        cout << 0 << endl;
    }
    else{
        cout << x - n << endl;
    }
    return 0;
}
