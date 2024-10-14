/*
Schreiben Sie nun das Programm um, sodass die Kamera als C++ Klasse definiert wird.
Achten Sie auf die Sichtbarkeit der Member-Variablen.
Implementieren Sie Konstruktoren (mit und ohne Parameter) und einen Destruktor.
Experimentieren Sie mit der Reihenfolge der Aufrufe der Konstruktoren und Destruktoren, indem Sie Objekte erzeugen und wieder zerstören.
Überladen Sie den << Operator, sodass eine Kamera auf der Konsole ausgegeben werden kann.
*/
#include <iostream>
#include <sstream>

using namespace std;

// TODO Beginn
class Camera{
private:
    std::string make;
    std::string model;
    int year;

public:
    Camera(std::string make, std::string model, int year)
        : make(make), model(model), year(year)
    {
//        this->make = make;
//        this->model = model;
//        this->year = year;
    }

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
    Camera camera3 ("Sony", "A6000", 2011);

    cout << camera1.toString();
    cout << camera2.toString();

    // TODO Ende

    return 0;
}
