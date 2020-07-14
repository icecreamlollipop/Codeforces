#include <bits/stdc++.h>
using namespace std;

int fact(int x){
  if(x == 0){
    return 1;
  }
  return x*fact(x - 1);
}
int main(){
  long long int A;
  long long int B;
  cin >> A >> B;
  int ans = fact(min(A, B));
  cout << ans << endl;
  return 0;
}
