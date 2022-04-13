#include <iostream>
using namespace std;
int main() {
  int x , r , v;
  cin >> x;
  cin >> r;
  cin >> v;
  int n , p , s;
  cin >> n;
  int fx = x;
  for (int i = 0; i < n; i++){
    cin >> p;
    cin >> s;
    if (p <= fx + r && p >= fx - r) {
      if (v >= s){
        fx = p;
      } 
      else {
        if (p >= fx){
          fx -= 15;
        } 
        else {
          fx += 15;
      }
    }
  }

  cout << fx;
}