#include <iostream>
using namespace std;

int main(){

      int t;
      cin >> t;

      string ans[t];

      for(int i = 0; i < t; i++){
          int n;
          cin >> n;
          int vals[n];
          int types[n];

          bool inOrder = true;
          bool equalTypes = true;

          for(int j = 0; j < n; j++){
              cin >> vals[j];
              if(vals[j] < vals[0]){
                  inOrder = false;
              }
          }
          for(int j = 0; j < n; j++){
              cin >> types[j];
              if(types[j] != types[0]){
                  equalTypes = false;
              }
          }

          if(inOrder == false && equalTypes == true){
              ans[i] = "No";
          }
          else{
              ans[i] = "Yes";
          }
      }
      for(int i = 0; i < t; i++){
          cout << ans[i] << endl;
      }
      return 0;
}
