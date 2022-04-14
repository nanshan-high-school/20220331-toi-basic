#include <iostream>

int position, range, limit;
int times;
int group[100][2];
int ans;

int main() {
  std::cin >> position >> range >> limit;
  std::cin >> times;
  ans = position;

  for (int i = 0; i < times; i++) {
    std::cin >> group[i][0] >> group[i][1];
  }

  for (int i = 0; i < times; i++) {
    if (group[i][0] <= ans + range && group[i][0] >= ans - range) {
      if (group[i][1] <= limit) ans = group[i][0];
      else {
        if (group[i][0] >= ans) ans -= 15;
        else ans += 15;
      }
    }
  }

  std::cout << ans;
}
