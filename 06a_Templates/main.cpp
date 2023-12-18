/*
 Für die Aufgabenstellung zu dieser main.cpp schauen Sie bitte in die Datei readme.md!
*/

#include <cstring>
#include <iostream>

using namespace std;

template <typename T>
class MyContainer
{
private:
    std::unique_ptr<T[]> memory;
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
    }

    void resize(int newCapacity)
    {
        T* newMemory = new T[newCapacity];
        memcpy(newMemory, memory.get(), length * sizeof(int));
        memory.reset(newMemory);
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
            throw invalid_argument("Invalid index!");
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

template <typename T>
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
    /* Int-Container Test*/
    MyContainer<int> myIntContainer;

    myIntContainer.addElement(1);
    myIntContainer.addElement(2);
    myIntContainer.addElement(3);
    myIntContainer.addElement(-1);

    cout << "Container length: " << myIntContainer.getLength() << endl;
    cout << "Container capacity: " << myIntContainer.getCapacity() << endl;

    printContainer(myIntContainer);

    try
    {
        myIntContainer.getElement(99);
    }
    catch (const invalid_argument& exception)
    {
        cout << "Exception while accessing element: " << exception.what() << endl;
    }

    /* Float-Container Test */
    MyContainer<float> myFloatContainer;

    myFloatContainer.addElement(3.14);
    printContainer(myFloatContainer);

    return 0;
}