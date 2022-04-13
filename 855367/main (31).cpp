#include <iostream>
using namespace std;
int main() {
  int k , w , s , e;
  int sum = 0;
  cin >> k >> w >> s >> e;
  if (k <= 2){
    sum += 20;
  }else if(k > 2){
    sum += 20 + (k - 2) * 5;
  }
  cout << sum <<" ";
  if (w >= 2){
    sum += (w / 2) * 5;
  }
  cout << sum<< " ";
  for(int i = s; i <= e; i++){ 
      if(i == 18){
        sum += 185 * (e - i) + (e - i - 1) * (e - i) / 2 * 10 ;
        break;
      }else if (i == 19){
        sum += 195 * (e - i) + (e - i - 1) * (e - i) / 2 * 10 ;
        break;
      }else if(i == 20){
        sum += 205 * (e - i) + (e - i - 1) * (e - i) / 2 * 10 ;
        break;
      }else if (s == 21){
        sum += 215 * (e - i) + (e - i - 1) * (e - i) / 2 * 10 ;
        break;
      }else if (s == 22){
        sum += 225 * (e - i) + (e - i - 1) * (e - i) / 2 * 10 ;
        break;
      }    
  }
  cout << sum;
}