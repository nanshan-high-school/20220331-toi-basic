#include <iostream>
#include <cmath>
using namespace std;
int main() {
  int K, W, S, E;
  cin >> K >> W >> S >> E;
  int total = 20;
  if (K > 2){total += (K-2) * 5;}
  total += W / 2 * 5;
  if (S < 18 && 18 < E){
    total += (185 + E*10-5) * (E-18) / 2;
  }else if(18 < S){
    total += (S*10+5 + E*10-5) * (E-S) / 2;
  }
  cout << total;  
}