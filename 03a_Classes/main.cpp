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

class Camera
{
private:
    string make;
    string model;
    int year;

public:
    // Konstruktoren
    Camera(string make_, string model_, int year_ = -1)
    {
        this->make = make_;
        model = model_;
        year = year_;
        cout << "Konstruktor von " << toString() << endl;
    }
    Camera(string make_)
    {
        make = make_;
        model = "";
        year = -1;
    }
    Camera()
    {
        make = "unknown";
        model = "unknown";
        year = -1;
        cout << "Konstruktor von " << toString() << endl;
    }

    // Copy-Konstruktor
    Camera(const Camera& other)
    {
        make = other.make;
        model = other.model;
        year = other.year;
    }

    // Destruktor
    ~Camera()
    {
        cout << "Destruktor von " << toString() << endl;
    }

    void print() const
    {
        cout << toString() << endl;
    }

    string toString() const
    {
        stringstream sstream;
        sstream << make << " "
                << model << " "
                << "(" << year << ")";
        return sstream.str();
    }

    void copyCamera(Camera& otherCamera) const
    {
        otherCamera.model = model;
        otherCamera.make = make;
        otherCamera.year = year;
    }

    // Überladung des stream-Operators (erlaubt Ausdrücke wie cout << camera)
    friend std::ostream &operator<<(std::ostream &out, const Camera &cam)
    {
        out << cam.toString();
        return out;
    }

};

void createTemporaryCamera()
{
    Camera cam = {"Sony", "A6000", 2018};
    cout << cam << endl;
}

int main()
{
    const Camera cam1 = {"Sony", "A7000", 2018};
    cam1.print();
    Camera cam4(cam1);
    cam4.print();

    {
        Camera cam2("Sony", "A5000");
    }

    createTemporaryCamera();
    return 0;
}
