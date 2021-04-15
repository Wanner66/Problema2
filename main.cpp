#include <iostream>
using namespace std;

int main() 
{
  int D,C;
  char N [20];
  cout << "Digite su Nombre: "<<endl;
  cin >> N;
  cout << " Digite la cantidad de dolares que desea convertir:"<<endl;
  cin >> D;
  C = D *606;
  cout << N << " La convercion de dolares a colones es: "<< C;
  return 0;
}