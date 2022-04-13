#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int x = 0, r = 0, v = 0;
  int n = 0;
  cin >> x >> r >> v;
  cin >> n;
  
  for(int i = 0; i < n; i++){
    int p = 0, s = 0;
    cin >> p >> s;
   
    int t1, t2;
    t1 = x + r;
    t2 = x - r;
   
    if((p <= t1 && p >= t2) && (s <= v)){
      x = p;
    }else if((p <= t1 && p >= t2) && (s > v)){
      if(x <= p){
        x -= 15;
      }else{
        x += 15;
      }
    }else{
      x = x;
    }
  }
  cout << x;
}