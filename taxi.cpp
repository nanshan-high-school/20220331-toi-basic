#include <iostream>

int dis;
int wait;
int hours[2];
int count = 20;
int prize[5] = {185, 195, 205, 215, 225};
int repeat;

int main() {
  std::cin >> dis >> wait >> hours[0] >> hours[1];

  if (dis > 2) count += (dis - 2) * 5;
  if (wait % 2 == 0) count += wait / 2 * 5;
  else count += (wait - 1) / 2 * 5;

  if (hours[1] > 18) {
    if (hours[0] <= 18) hours[0] = 18;
    for (int i = hours[0]; i < hours[1]; i++) {
      count += prize[i - 18];
    }
  }
  
  std::cout << count;
} 