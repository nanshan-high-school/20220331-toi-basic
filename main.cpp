#include <iostream>
using namespace std;
int main() {
 int km,delay,hr1,hr2,money;
  cin>>km;cin>>delay;cin>>hr1;cin>>hr2;
  if (km<=2){money=20;}
  else{money=(km-2)*5+20;}  
  money=money+(delay/2)*5;
  if(hr1<=18 and 18<hr2){money=money+185;}
  if(hr1<=19 and 19<hr2){money=money+195;}
  if(hr1<=20 and 20<hr2){money=money+205;}
  if(hr1<=21 and 21<hr2){money=money+215;}
  if(hr1<=22 and 22<hr2){money=money+225;}
  cout<<money;
}