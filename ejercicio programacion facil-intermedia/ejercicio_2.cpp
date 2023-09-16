#include <iostream>
using namespace std;

int main() {
    float cantidadPies, cantidadMetros,piesAPulgadas,piesAYardas,piesAMetros,metrosAMillas,suma1,suma2,suma3,suma4;
    cout << "Ingrese la cantidad en pies: ";
    cin >>cantidadPies;
    cout<<" Ingrese la cantidad en metros: ";
    cin >>cantidadMetros;
    piesAPulgadas =12.0;
    piesAYardas =1.0 / 3.0;
    piesAMetros = 0.3048;
    metrosAMillas = 1.0 / 1609.0;
    suma1=(cantidadPies + cantidadMetros / piesAMetros) * piesAPulgadas;
    suma2=(cantidadPies * piesAYardas + cantidadMetros / piesAMetros);
    suma3=(cantidadPies * piesAMetros + cantidadMetros);
    suma4=(cantidadPies * piesAMetros * metrosAMillas +cantidadMetros * metrosAMillas);
    cout << "La suma en pulgadas es: " << suma1 << " pulgadas." << endl;
    cout << "La suma en yardas es: " << suma2 << " yardas." << endl;
    cout << "La suma en metros es: " << suma3<< " metros." << endl;
    cout << "La suma en millas es: " << suma4<< " millas." << endl;


}
