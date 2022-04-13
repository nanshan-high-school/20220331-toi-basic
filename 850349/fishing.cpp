#include <iostream>
#include <cmath>
using namespace std;

int main() {
  float x = 0, y = 0;
  float n = 0;
  float a = 0, b = 0;
  float t5 = 0;
  float big = 99999;

  cin >> x >> y;
  cin >> n;
  
  for(int i = 0; i < n; i++){
    float t1 = 0, t2 = 0, t3 = 0, t4 = 0;
    float at = 0, bt = 0;
    cin >> at >> bt;
     t1 = abs(at - x);
     t2 = pow(t1, 2);
     t3 = abs(bt - y);
     t4 = pow (t3, 2);
     t5 = sqrt(t2 + t4);

    if(t5 < big){
      big = t5;
      a = at;
      b = bt;
    }
  }
  cout << a << " " << b;
}