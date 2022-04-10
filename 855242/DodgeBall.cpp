#include <iostream>
using namespace std;

int main() {
  int personPlace = 0, move = 0, speedLimit = 0;
  cin >> personPlace >> move >> speedLimit;

  int times = 0;
  cin >> times;

  for (int i = 0; i < times; i++) {
    int ballPlace = 0, ballSpeed = 0;
    cin >> ballPlace >> ballSpeed;

    if (abs(personPlace - ballPlace) <= move) {
      if (speedLimit >= ballSpeed) {
        personPlace = ballPlace;
      } else if (speedLimit < ballSpeed) {
        if (personPlace > ballPlace) {
          personPlace += 15;
        } else {
          personPlace -= 15;
        }
      }
    }
  }
  
  cout << personPlace;
}
