#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int personPlaceX = 0, personPlaceY = 0;
  cin >> personPlaceX >> personPlaceY;

  int fishNum = 0;
  cin >> fishNum;

  int closestPlaceX = -1, closestPlaceY = 0, closestDistance;
  closestDistance = pow(pow(500,2) + pow(500,2), 0.5);
  for (int i = 0; i < fishNum; i++) {
    int fishPlaceX = 0, fishPlaceY = 0, fishDistance;
    cin >> fishPlaceX >> fishPlaceY;

    fishDistance = pow(pow(personPlaceX - fishPlaceX,2) + pow(personPlaceY - fishPlaceY,2), 0.5);
      if (closestDistance > fishDistance) {
        closestPlaceX = fishPlaceX;
        closestPlaceY = fishPlaceY;
        closestDistance = fishDistance;
      }
  }

  cout << closestPlaceX << " " << closestPlaceY;
}