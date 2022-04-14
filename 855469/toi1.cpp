#include <iostream>
#include <cmath>
using namespace std;
int main() {
  int X, Y, N;
  cin >> X >> Y;
  cin >> N;

  int min_x = 99999999;
  int min_y = 99999999;
  int fishs[N][2];
  for(int i = 0; i < N; i++){
    cin >> fishs[i][0] >> fishs[i][1];
    if ( (pow(fishs[i][0] - X,2) + pow(fishs[i][1] - Y, 2)) < pow(min_x - X, 2) + pow(min_y - Y, 2)){
      min_x = fishs[i][0];
      min_y = fishs[i][1];
    }
  }

  cout << min_x << ' ' << min_y;
}