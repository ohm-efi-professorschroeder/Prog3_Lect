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

// TODO Beginn

struct Camera{
    std::string make;
    std::string model;
    int year;

    string toString() {
        stringstream stream;
        stream << make << ", " << model << " (" << year << ") " << endl;
        return stream.str();
    }
};

// TODO Ende

int main()
{
    // TODO Beginn

    Camera camera1 {"Leica", "M5", 1975};
    Camera camera2 {"Canon", "EOS 5D", 2010};

    cout << camera1.toString();
    cout << camera2.toString();
    // TODO Ende
}