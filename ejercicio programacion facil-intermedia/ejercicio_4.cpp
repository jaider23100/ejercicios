#include <iostream>
using namespace std;
int main() {
  int opcion;
  float num1,num2,suma,resta,multiplicacion,division;
  cout<<" Ingrese un numero: ";
  cin>>num1;
  cout<<" Ingrese un numero: ";
  cin>>num2;
  cout<<" Para elegir la operacion digite, suma(1), resta(2), multiplicacion(3), division(4) ";
  cin>>opcion;
  switch(opcion)
    {
      case 1: cout<<" La suma de los dos numeros es: ";
              suma=num1+num2;
              cout<<num1<<" + "<<num2<<endl<<suma;
      break;
      case 2: cout<<" La resta de los dos numeros es: ";
              resta=num1-num2;
              cout<<num1<<" - "<<num2<<endl<<resta;
      break;
      case 3: cout<<" La multiplicacion de los dos numeros es: ";
              multiplicacion=num1*num2;
              cout<<num1<<" * "<<num2<<endl<<multiplicacion;
      break;
      case 4: cout<<" La division de los numeros es: ";
              division=num1/num2;
              cout<<num1<<" / "<<num2<<endl<<division;


    }

}
