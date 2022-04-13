#include <iostream>

using namespace std;

int main() {
  int xia[1][2];
  cin >> xia[0][0];
  cin >> xia[0][1];
  int how = 0 ;
  cin >> how ;
  int fish[how][2] , far = 0, min = 10000000000, ans[2];
  for(int i = 0 ;i < how ;i++){
    fish[i][0] = 0 ;
    fish[i][1] = 0 ;
    cin >> fish[i][0] ;
    cin >> fish[i][1] ;
    far = ((xia[0][0]-fish[i][0])*(xia[0][0]-fish[i][0])) + ((xia[0][1]-fish[i][1])*(xia[0][1]-fish[i][1])) ;
    
    if(far < min){
      min = far;
      ans[0] = fish[i][0];
      ans[1] = fish[i][1];
    }
  }
  cout << ans[0] <<" "<< ans[1] ;
}