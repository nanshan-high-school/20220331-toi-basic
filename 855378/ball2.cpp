#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
  int x, r, v, n, p, s;
  cin >> x;
  cin >> r;
  cin >> v;
  cin >> n;
  for (int i = 0;i < n;i ++) {
    cin >> p;
    cin >> s;
    if (p <= x + r && p >= x - r) {
      if  (s <= v) {
        x = p;
      }else if (p >= x) {
        x -= 15;
      }
      else if (p < x) {
        x += 15;
      }
    }
  }
  cout << x;
 
 
}
