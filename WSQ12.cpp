#include <iostream>
using namespace std;

int gcd (int x, int y){
  int gcd;
  for(int i=1; i<=x; i++){
    if(x%i == 0 && y%i == 0)
    gcd = i;
  }

  return gcd;
}

 int main (){
   int num1, num2;
   cout<<"Dame el primer numero "<<endl;
   cin>>num1;
   cout<<"Dame el segundo numero "<<endl;
   cin>>num2;
   cout<<"El maximo comun divisor es: "<< gcd(num1, num2)<<endl;

   return 0;
 }
