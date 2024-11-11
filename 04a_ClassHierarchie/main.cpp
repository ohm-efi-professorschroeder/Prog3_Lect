/*
 Für die Aufgabenstellung zu dieser main.cpp schauen Sie bitte in die Datei readme.md!
*/
#include "digitalcamera.h"
#include "event.h"
#include "filmcamera.h"
#include "photographer.h"
#include "smartphone.h"

int main()
{
    FilmCamera filmCamera(2000, "Canon", "EOS", "Kodak Portra 400");
    DigitalCamera digitalCamera(2018, "Nikon", "D850", 45);
    FilmCamera m5(1972, "Leica", "M5", "Ilford HP5");

    Camera nullCamera;
    nullCamera.takePhoto();

//    Photographer alice("Alice");
//    alice.addCamera(&filmCamera);
//    alice.addCamera(&digitalCamera);
//    Photographer bob("Bob");
//    bob.addCamera(&m5);
//
//    Event event("B-ME Abschlussfeier", "21.07.2024");
//    event.addPhotographer(&alice);
//    event.addPhotographer(&bob);
//
////
////    // Der folgende Code sollte erst nach Implementierung von Aufgabe 3 ausführbar sein!
////    Photographer lisa("Lisa");
////    Smartphone smartphone("Apple", "iPhone 12");
////    lisa.addCamera(&smartphone);
////    event.addPhotographer(&lisa);
//
//
//    event.start();

    return 0;
}