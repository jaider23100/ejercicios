#include <iostream>
using namespace std;

int main() {
    int horas,minutos,segundos,totalSegundos,horasTotales,minutosTotales, segundosTotales;
    cout<<" Ingrese el tiempo en horas de los atletas: ";
    cin >>horas>>minutos>>segundos;
    totalSegundos = (horas1 + horas2) * 3600 + (minutos1 + minutos2) * 60 + (segundos1 + segundos2);
    horasTotales = totalSegundos / 3600;
    minutosTotales = (totalSegundos % 3600) / 60;
    segundosTotales = totalSegundos % 60;
    cout << "Tiempo total utilizado por ambos atletas: " << horasTotales << " horas, " << minutosTotales << " minutos, " << segundosTotales << " segundos." << endl;

}






