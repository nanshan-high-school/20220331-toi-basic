#include <iostream>

using namespace std;

int main() {
  int sex = 0 , ex = 0 , k = 0 , t = 0 , f = 0 , b = 0 , money = 20 ;
  cin >> k >> t >> f >> b ;
  if(b > 18 && f >= 18){
    ex = b - 18 ;
    sex = f - 18;
    money += 175*ex + (((1 + ex)*ex)/2)*10 ;
    money -= 175*sex + (((1 + sex)*sex)/2)*10 ;
  }
  if(b >= 18 && f < 18){
    ex = b - 18 ;
    money += 175*ex + (((1 + ex)*ex)/2)*10 ;
    }
  if(k >= 2){
    money += (k - 2)*5;
  }
  if(t >= 2){
    if(t % 2 == 0){
    money += (t/2)*5;
    }else if(t % 2 == 1){
      money += ((t/2))*5;
    }
    }
  cout << money;
}