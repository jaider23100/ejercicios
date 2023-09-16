#include <iostream>
using namespace std;

int main() {
    int numeroHijos, edadHijos,EdadEscolar=0;
    char madreViuda;
    float subsidio;
    cout << "Ingrese el número de hijos en la familia: ";
    cin >> numeroHijos;
    int hijosEnEdadEscolar = 0;
    for (int i = 1; i <= numeroHijos; i++) {
        cout << "Ingrese la edad del hijo " << i << ": ";
        cin >> edadHijos;
        if (edadHijos >= 6 && edadHijos <= 18) {
               EdadEscolar++;
        }
    }
    cout<< "La madre de familia es viuda (S/N)? ";
    cin>> madreViuda;
    if (numeroHijos <= 2) {
        subsidio = 70.0;
    } else if (numeroHijos >= 3 && numeroHijos <= 5) {
        subsidio =90.0;
    } else if (numeroHijos >= 6) {
        subsidio = 120.0;
    }
     subsidio +=EdadEscolar;
      if (madreViuda == 'S' || madreViuda == 's') {
        subsidio +=20.0;
    }
    cout << "El monto mensual que recibirá la familia es: " << subsidio<< endl;
    }
