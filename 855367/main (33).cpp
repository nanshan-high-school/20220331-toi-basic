#include <iostream>
using namespace std;
int main() {
  int px , py , a;
  cin >> px;
  cin >> py;
  cin >> a;
  int min = 250001;
  int x , y , b;
  int mx , my;
  for(int i = 0; i < a; i++){
    cin >> x;
    cin >> y;
    b = (px - x)*(px - x)+(py - y)*(py - y);
    if(b < min){
      min = b;
      mx = x;
      my = y;
    }
  }
  cout << mx << " " << my;
}