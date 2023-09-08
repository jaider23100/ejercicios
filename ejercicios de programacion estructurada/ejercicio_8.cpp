#include <iostream>
using namespace std;
int main(){
float temp,celsius,farenheit,kelvin,celsius1,farenheit1,kelvin1,celsius2,farenheit2,kelvin2;
cout<<" Ingrese una temperatura: ";
cin>>temp;
cout<<" Escala de temperatura celsius "<<endl;
celsius=temp;
farenheit=((9*temp)+32)/5;
kelvin=temp+273.15;
cout<<celsius<<"°"<<endl<<farenheit<<"°"<<endl<<kelvin<<"°"<<endl;
cout<<endl<<" Escala de temperatura farenheit "<<endl;
farenheit1=temp;
celsius1=(5*(temp-32))/9;
kelvin1=(5*(temp-32)+273.15)/9;
cout<<farenheit1<<"°"<<endl<<celsius1<<"°"<<endl<<kelvin1<<"°"<<endl;
cout<<endl<<" Escala de temperatura kelvin "<<endl;
kelvin2=temp;
farenheit2=(9*(temp-273.15)+32)/5;
celsius2=temp-273.15;
cout<<kelvin2<<"°"<<endl<<celsius2<<"°"<<endl<<farenheit2<<"°"<<endl;

}
