#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
  // deletes all vowels
  // inserts . before each consonant
  // replaces all uppcase with lowercase
  string s;
  cin >> s;

  string x;
  transform(s.begin(), s.end(), s.begin(), ::tolower);

  for(int i = 0; i < s.length(); i++){
      if(s[i] !=  'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'y'){
          x = x + '.' + s[i];
      }
  }
  cout << x << endl;
  return 0;
}
