#include <iostream>
using namespace std;

int main(){
    int x;
    cin >> x;
    if(x % 4 == 0 || x % 7 == 0 || x % 47 == 0 || x % 74 == 0 || x % 447 == 0 || x % 774 == 0 || x % 474 == 0 || x % 747 == 0 || x % 477 == 0 || x % 744 == 0){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
    return 0;
}
