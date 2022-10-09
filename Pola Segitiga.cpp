#include <iostream>
using namespace std;
int main() {    
  int n;
  
  cin >> n;
  
  for(int a = 0; a < n; a++){
     for(int b = n; b > a; b--){
          cout << " "; }
     for(int c = 1; c <= (2*a-1); c++){
         cout << "*"; }
    cout << endl; }
    
  return 0;
}
