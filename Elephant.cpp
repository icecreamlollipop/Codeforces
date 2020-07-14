#include <iostream>
using namespace std;

int main(){
    int x;
    cin >> x;

    int s = 0;

    while(x >= 5){
        x -= 5;
        s++;
    }
    while(x >= 4){
        x -= 4;
        s++;
    }
    while(x >= 3){
        x -= 3;
        s++;
    }
    while(x >= 2){
        x -= 2;
        s++;
    }
    while(x >= 1){
        x -= 1;
        s++;
    }
    cout << s << endl;
    return 0;
}
