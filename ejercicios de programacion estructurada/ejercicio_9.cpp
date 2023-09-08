#include <iostream>
using namespace std;
int main(){
float prev1,prev2,nota3,examf,notaf;
cout<<" Ingrese la nota del primer previo: ";
cin>>prev1;
cout<<" Ingrese la nota del segundo previo: ";
cin>>prev2;
cout<<" Ingrese la tercera nota: ";
cin>>nota3;
cout<<" Ingrese la nota del examen final: ";
cin>>examf;
notaf=(prev1*0.25+prev2*0.25+nota3*0.20+examf*0.30);
cout<<" La nota definitiva de la materia es: "<<endl<<notaf;

}
