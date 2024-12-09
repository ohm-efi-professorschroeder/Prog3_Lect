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
    cout << "Doing something with c pointer to '" << instance->instanceId_ << "'" << endl;
}

void doSomething(shared_ptr<MyClass> instance)
{
    cout << "Doing something with shared pointer to '" << instance->instanceId_ << "'" << endl;
}

void doSomething(const unique_ptr<MyClass>& instance)
{
    cout << "Doing something with unique pointer to '" << instance->instanceId_ << "'" << endl;
}

int main()
{
    MyClass instance01("instance01");
    shared_ptr<MyClass> sharedInstance;

    if(true)
    {
        MyClass instance02("instance02");
        auto instance03 = make_unique<MyClass>("instance03");
        doSomething(instance03);
        auto instance04 = make_shared<MyClass>("instance04");
        sharedInstance = instance04;
    }

    return 0;
}