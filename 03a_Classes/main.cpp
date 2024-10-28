/*
Schreiben Sie nun das Programm um, sodass die Kamera als C++ Klasse definiert wird.
Achten Sie auf die Sichtbarkeit der Member-Variablen.
Implementieren Sie Konstruktoren (mit und ohne Parameter) und einen Destruktor.
Experimentieren Sie mit der Reihenfolge der Aufrufe der Konstruktoren und Destruktoren, indem Sie Objekte erzeugen und wieder zerstören.
Implementieren Sie einen Kopierkonstruktor.
Überladen Sie den '=' Operator, sodass Ausdrücke wie camera1 = camera2 möglich sind.
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
    // Konstruktor
    Camera(std::string make, std::string model, int year)
        : make(make), model(model), year(year)
    {
        std::cout << toString() << ": Konstruktor (3 Argumenten)" << std::endl;
    }

    // Konstruktor
    Camera()
    : make(""), model(""), year(0)
    {
        std::cout << toString() << ": Konstruktor (0 Argumenten)" << std::endl;
    }

    // Kopierkonstruktor
    Camera(const Camera& other)
    {
        make = other.make;
        model = other.model;
        year = other.year;
    }

    // Destruktor
    ~Camera()
    {
        std::cout << toString() << ": Destruktor" << std::endl;
    }

    string toString() const{
        stringstream stream;
        stream << make << ", " << model << " (" << year << ") ";
        return stream.str();
    }

    // Zuweisungsoperator
    void operator=(const Camera& other)
    {
        make = other.make;
        model = other.model;
        year = 42;
    }

    // Stream Operator
    friend std::ostream& operator<<(std::ostream& os, const Camera& cam)
    {
        os << cam.toString();
        return os;
    }
};

// TODO Ende

void someFunction()
{
    Camera camera5("Kamera", "5", 1234);
}

int main()
{
    // TODO Beginn
    Camera camera1 {"Leica", "M5", 1975};
    Camera camera2 {"Canon", "EOS 5D", 2010};
    Camera camera3 ("Sony", "A6000", 2011);

    someFunction();

    Camera camera4;
    cout << camera4.toString();

    Camera camera5(camera2);

    camera3 = camera1;
    std::cout << camera3.toString() << std::endl;

    std::cout << camera1 << std::endl;

    // TODO Ende

    return 0;
}
