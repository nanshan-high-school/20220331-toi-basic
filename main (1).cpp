#include <iostream>
using namespace std;
int main() {
  int place,a,b,a1,b1,p;
  cin>>place,cin>>a,cin>>b;cin>>p;
  for(int i=1;i<=p;i++){
    cin>>a1;cin>>b1;
    if(place+a >= a1 and a1 >= place-a){
      if(b1<=b){place=a1;}
      else{
      if(a1>=place){place=place-15;}
      else{place=place+15;}}
    }
  }
  cout<<place;
}