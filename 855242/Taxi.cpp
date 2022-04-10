#include <iostream>
using namespace std;

int main() {
  int totalKm = 0, delay = 0, takeOnTime = 0, takeOffTime = 0;
  cin >> totalKm >> delay >> takeOnTime >> takeOffTime;

  int totalPay = 0;
  
  if (totalKm <= 2) {
    totalPay += 20;
  } else {
    totalPay += (20 + 5 * (totalKm - 2));
  }

  if (delay) {
    totalPay += (5 * (delay / 2));
  }

  for (int i = takeOffTime; i > takeOnTime; i--) {
    if (i >= 19) {
      totalPay += (10 * (i - 1) + 5);
    }
  }

  cout << totalPay;
}
