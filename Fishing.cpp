#include <iostream>
#include <cmath>

int coor[2];
int fish[100][2];
int num;
int dis = -1;
int ans[2];

int main() {
  std::cin >> coor[0] >> coor[1] >> num;
  
  for (int i = 0; i < num; i++) {
    std::cin >> fish[i][0] >> fish[i][1];
  }

  for (int i = 0; i < num; i++) {
    int num = pow(fish[i][0] - coor[0], 2) + pow(fish[i][1] - coor[1], 2);
    
    if (dis == -1 || num < dis) {
      dis = num;
      ans[0] = fish[i][0];
      ans[1] = fish[i][1];
    }
  }

  std::cout << ans[0] << " " << ans[1];
}