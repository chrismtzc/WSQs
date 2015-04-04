
#include <iostream>
using namespace std;

int factorial (int num)
{
  int contador, acumulador=1;
  for(contador=2; contador<=num; contador++){
    acumulador=acumulador*contador;

  }
  return acumulador;
}

int main(){
  int num;
  cout<<"Dame un numero"<<endl;
  cin>> num;
  cout<<factorial(num);
  cout<<endl;

  return 0;
}
