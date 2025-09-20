//Ejercicio 2.2: Rastreador de Distancias para Conductores de Entregas
//Objetivo : Usar arreglos para almacenar datos y realizar cálculos.
//Descripción : Imagina que estás construyendo una herramienta de seguimiento de 
//entregas para una flota de conductores. Crea un programa donde cada conductor 
//registra la distancia que ha recorrido en un día específico. Almacena los datos 
//para 10 conductores (usa un arreglo de flotantes para representar las distancias diarias).
//Calcula la distancia promedio recorrida por todos los conductores y muestra el conductor 
//con la distancia máxima, además de la distancia total recorrida por todos los conductores.



#include <iostream>
using namespace std;

int main() {
    float max_distancia = 0;
    int conductor_max = 0;
    float total_distancias = 0;
    float distancias[10];
    int i;
    for (i = 0; i < 10; i++) {
        cout << "Ingrese la distancia recorrida por el conductor " << i+1 << ": ";
        cin >> distancias[i];
        total_distancias += distancias[i];
        if (distancias[i] > max_distancia) {
            max_distancia = distancias[i];
            conductor_max = i + 1;
        }
    }
    float promedio_distancias = total_distancias / 10;
    cout << "La distancia total recorrida por todos los conductores es: " << total_distancias << " km" << endl;
    cout << "La distancia promedio recorrida por todos los conductores es: " << promedio_distancias << " km" << endl;
    cout << "El conductor con la distancia máxima es: Conductor " << conductor_max << " con " << max_distancia << " km" << endl;
}