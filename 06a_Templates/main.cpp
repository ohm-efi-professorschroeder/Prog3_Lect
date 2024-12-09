/*
 Für die Aufgabenstellung zu dieser main.cpp schauen Sie bitte in die Datei readme.md!
*/

#include <cstring>
#include <iostream>

using namespace std;

template<typename T>
class MyContainer
{
private:
    unique_ptr<T[]> memory;
    int length;
    int capacity;

public:
    MyContainer()
            : memory(nullptr)
            , length(0)
            , capacity(0)
    {}

    ~MyContainer()
    {
        //delete[] memory;
    }

    void resize(int newCapacity)
    {
        auto newMemory = unique_ptr<T[]>(new T[newCapacity]);
        memcpy(newMemory.get(), memory.get(), length * sizeof(int));
        memory.swap(newMemory);
        capacity = newCapacity;
    }

    void addElement(T element)
    {
        if (length == capacity)
        {
            resize(capacity + 1);
        }
        memory[length] = element;
        length++;
    }

    T getElement(int index) const
    {
        if(index < 0 || index >= length)
        {
            throw invalid_argument("Ungueltiger Index");
        }
        return memory[index];
    }

    int getLength() const
    {
        return length;
    }

    int getCapacity() const
    {
        return capacity;
    }

};

template<typename T>
void printContainer(const MyContainer<T>& container)
{
    cout << "Container elements: " << endl;
    for(int i = 0; i < container.getLength(); ++i)
    {
        cout << "..." << container.getElement(i) << endl;
    }
}

int main()
{
    // Der folgende Code läuft, bevor Sie die Aufgaben bearbeitet haben (und MyContainer gemäß der Aufgabenstellung
    // modifiziert haben)!
    /*
    MyContainer myIntContainer;

    myIntContainer.addElement(1);
    myIntContainer.addElement(2);
    myIntContainer.addElement(3);
    myIntContainer.addElement(-1);

    cout << "Container length: " << myIntContainer.getLength() << endl;
    cout << "Container capacity: " << myIntContainer.getCapacity() << endl;

    printContainer(myIntContainer);
     */

    // Der folgende Code läuft erst nach vollständiger Bearbeitung der Aufgaben!

    // Int Template-Container Test
    MyContainer<int> myIntContainer;

    myIntContainer.addElement(1);
    myIntContainer.addElement(2);
    myIntContainer.addElement(3);
    myIntContainer.addElement(-1);

    cout << "Container length: " << myIntContainer.getLength() << endl;
    cout << "Container capacity: " << myIntContainer.getCapacity() << endl;


    printContainer(myIntContainer);



    // Float Template-Container Test
    MyContainer<float> myFloatContainer;

    myFloatContainer.addElement(3.14);
    printContainer(myFloatContainer);


    // Exception Test
    try
    {
        myIntContainer.getElement(99);
    }
    catch (const invalid_argument& exception)
    {
        cout << "Exception while accessing element: " << exception.what() << endl;
    }

    return 0;
}