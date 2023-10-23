/*
Schreiben Sie nun das Programm um, sodass die Kamera als C++ Struktur definiert wird.
Nutzen Sie statt char* den Typen std::string.
Initialisieren Sie die Kamera-Objekte durch einen Initialisierungsliste.
Implementieren Sie eine Member-Funktion toString(), welche eine String-Repräsentation der Kamera zurückgibt.
Nutzen Sie toString() in der main-Funktion, um die Kamera-Objekte auszugeben.
*/

#include <iostream>
#include <sstream>

using namespace std;

struct Camera
{
    string make;
    string model;
    int year; 

    void print()
    {
        cout << toString();
    } 

    string toString()
    {
        stringstream sstream;
        sstream << make << endl
        << model << endl
        << year << endl;
        return sstream.str();
    }
};

int main()
{
    Camera cam1 = {"Leica", "M5", 1972};
    Camera cam2 = {"Sony", "A6000", 2019};

    Camera cam3;

    cam1.make = "Canon";

    cam1.print();
    cam2.print();
}