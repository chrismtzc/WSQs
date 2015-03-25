#include <iostream>
using namespace std;

void triangulo (int x){
  for(int i=1; i<=x; i++){
    for(int t=1; t<=i; t++){
      cout<< "T";
    }
    cout << endl;
  }
  for(int i=(x-1); i>0; i--){
    for(int t=1; t<=i; t++){
      cout << "T";
    }
    cout << endl;
  }
}


int main ()
{
  int x;
  cout<<"Dame el numero del largo del triangulo"<<endl;
  cin>>x;
  cout<<endl;
  triangulo(x);

  return 0;
}
