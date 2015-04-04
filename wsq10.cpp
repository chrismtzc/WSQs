#include <iostream>
#include <cmath>

using namespace std;

double array[10];
double suma(double array[]){
double sum2;
for(int i=0; i<10; i++){
  sum2=sum2+array[i];
}
return sum2;
}

double promedio(double array[]){
  double prom2;
  for(int i=0; i<10; i++){
    prom2=prom2+(array[i]/10);
  }
  return prom2;
}

double desv(double array[]){
  double suma, promedio, de, sd;
  for(int i=0; i<10; i++){
    suma=suma+array[i];
  }
  promedio=suma/10;
  for(int i=0; i<10; i++){
    de=de+pow((array[i]-promedio),2);
  }
  de=de/9;
  de= sqrt (de);

  return de;
}
int main(){
  double sum3, prom, desvi;
  for(int i=0; i<10; i++){
    cout<<"Ingresa el numero de la posicion "<<i+1<<endl;
    cin>>array[i];
  }
  sum3=suma(array);
  cout<<"La suma de los numeros es "<<sum3<<endl;
  prom= promedio(array);
  cout<<"El promedio de los numeros es "<<prom<<endl;
  desvi=desv(array);
  cout<<"La desviacion estandart es: "<<desvi<<endl;

  return 0;
}
