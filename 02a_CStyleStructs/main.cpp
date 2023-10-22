/*
Schreiben Sie ein Programm, welches eine Kamera als c-Style Struktur (typedef struct...) definiert.
Eine Kamera hat folgende Eigenschaften: Hersteller, Modell, Baujahr.
Erstellen Sie zwei Kamera-Objekte und initialisieren Sie diese mit Werten Ihrer Wahl.
Schreiben Sie eine Funktion, welche eine Kamera auf der Konsole ausgibt.
Implementieren Sie diese Funktion zuerst mit einem Pointer auf die Kamera-Struktur und dann mit einer Referenz auf die Kamera-Struktur.

Eine Beispiel-Ausgabe könnte wie folgt aussehen:
> Camera
> --------------
> Make: Leica
> Model: M5
> Year: 1958
>
> Camera
> --------------
> Make: Sony
> Model: A6000
> Year: 2019

*/
#include <iostream>

using namespace std;

typedef struct
{
    char* make;
    char* model;
    int year; 
} Camera;

void printCamera(const Camera* camX)
{
    cout << camX->make << endl
    << camX->model << endl
    << camX->year << endl;
}

int main()
{
    Camera cam1 = {(char*)"Leica", (char*)"M5", 1972};
    Camera cam2 = {(char*)"Sony", (char*)"A6000", 2019};

    printCamera(&cam1);
    printCamera(&cam2);
}
