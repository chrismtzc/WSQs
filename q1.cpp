#include <iostream>
using namespace std;

int gcd (int a, int b) {
  int res=1;
  for(int i=1; i<=a; i++) {
    if ((a%i==0) && (b%i==0)) {
      res=i;
    }
  }
  return res;
}



int main (){
  int a, b, res;
  cout<<"Dame el primer numero"<<endl;
  cin>>a;
  cout<<"Dame el segundo numero"<<endl;
  cin>>b;

  res= gcd (a, b);

  cout<<"El maximo comun multiplo es "<<res<<endl;


  return 0;
}
