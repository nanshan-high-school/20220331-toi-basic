#include <iostream>

using namespace std ;

int main() {
  int x = 0 , r = 0 , v = 0 , t = 0 , y = 0 , s = 0;
  cin >> x >> r >> v ;
  cin >> t ;
  for(int i = 0 ;i < t ;i++){
    cin >> y >> s ;
    if ((x - r) <= y && y <= (x + r)){
      if (v < s){
        if(y >= x){
          x -= 15;
        }else{
          x += 15;
        }
      }else{
        x = y;
      }
    }else{
      x = x;
    }
    cout << x << "\n";
  }
  cout << x ;
}