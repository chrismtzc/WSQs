#include <iostream>
using namespace std;

double root(double a){
    double r = a, t = 0;
    while (t != r){
        t = r;
        r = (a/r + r)/2;
    }
    return r;
}


int main () {

  int a;
  cout<<"Dame el valor que quieres saber "<<endl;
  cin >> a;

  cout<<root(a);

  cout<<endl;

  return 0;
}
