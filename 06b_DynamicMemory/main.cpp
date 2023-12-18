/*
*/

#include <memory>
#include <iostream>

using namespace std;

struct MyClass
{
    string instanceId_;

    MyClass(string instanceId)
    : instanceId_(instanceId)
    {
        cout << "Creating instance '" << instanceId_ << "'" << endl;
    }

    ~MyClass()
    {
        cout << "Destroying instance '" << instanceId_ << "'" << endl;
    }
};

void doSomething(MyClass *instance)
{
    cout << "Doing something with '" << instance->instanceId_ << "'" << endl;
}

int main()
{
    MyClass instance01("instance01");

    {
        MyClass instance02("instance02");
    }

    MyClass *instance03;
    if (true)
    {
        instance03 = new MyClass("instance03");
    }
    delete instance03;

    shared_ptr<MyClass> sharedPtr;
    unique_ptr<MyClass> uniquePtr;
    if(true)
    {
        unique_ptr<MyClass> instance04 = make_unique<MyClass>("instance04 - unique");
        shared_ptr<MyClass> instance05 = make_shared<MyClass>("instance05 - shared");
        sharedPtr = instance05;
        // geht nicht: uniquePtr = instance04;
    }
    cout << "End of if" << endl;

    return 0;
}