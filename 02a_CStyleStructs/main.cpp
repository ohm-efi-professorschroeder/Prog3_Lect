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

// TODO Beginn

typedef struct {
    char *make;
    char *model;
    int year;
} Camera;

// C-style (Pointer)
//void printCamera(const Camera *cam) {
//    cout << cam->make << ", " << cam->model << " (" << cam->year << ") " << endl;
//}

// Cpp-style (Referenz)
void printCamera(const Camera &cam) {
    cout << cam.make << ", " << cam.model << " (" << cam.year << ") " << endl;
}

// TODO Ende

int main()
{
    // TODO Beginn

    Camera camera1;
    camera1.make = "Leica";
    camera1.model = "M5";
    camera1.year = 1975;

    Camera camera2;
    camera2.make = "Canon";
    camera2.model = "EOS 5D";
    camera2.year = 2010;

    printCamera(camera1);
    printCamera(camera2);
    //printCamera(0);
    // TODO Ende
}
