#include <iostream>
using namespace std;
int main() {
  int px = 0,py = 0;
  cin >> px;
  cin >> py;
  int n = 0,min = 250001,minx, miny;
  cin >> n;
  int x, y;
  for (int i = 0;i < n;i ++) {
    cin >> x;
    cin >> y;
    if ((px - x)*(px - x) + (py - y)*(py - y) < min) {
      min = ((px - x)*(px - x) + (py - y)*(py - y));
      minx = x;
      miny = y;
    }
  }
  cout << minx << " " << miny;
 
   

}
