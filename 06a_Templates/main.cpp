/*
 Für die Aufgabenstellung zu dieser main.cpp schauen Sie bitte in die Datei readme.md!
*/

#include <cstring>
#include <iostream>

using namespace std;

class MyContainer
{
private:
    //int *memory;
    std::unique_ptr<int> memory;
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
//        int* newMemory = new int[newCapacity];
//        memcpy(newMemory, memory, length * sizeof(int));
//        delete[] memory;
//        memory = newMemory;
//        capacity = newCapacity;
        int* newMemory = new int[newCapacity];
        memcpy(newMemory, memory.get(), length * sizeof(int));
        memory.reset(newMemory);
        capacity = newCapacity;
    }

    void addElement(int element)
    {
        if (length == capacity)
        {
            resize(capacity + 1);
        }
        memory[length] = element;
        length++;
    }

    int getElement(int index) const
    {
        if(index < 0 || index >= length)
        {
            return -1;
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

int main()
{
    /* Int-Container Test*/
    MyContainer myIntContainer;

    myIntContainer.addElement(1);
    myIntContainer.addElement(2);
    myIntContainer.addElement(3);

    cout << "Container length: " << myIntContainer.getLength() << endl;
    cout << "Container capacity: " << myIntContainer.getCapacity() << endl;

    cout << "Container elements: " << endl;
    for(int i = 0; i < myIntContainer.getLength(); ++i)
    {
        cout << "..." << myIntContainer.getElement(i) << endl;
    }

    /* Shared-Ptr example */
    std::shared_ptr<MyContainer> myDynamicContainer = std::make_shared<MyContainer>();
    myDynamicContainer->addElement(42);

    return 0;
}