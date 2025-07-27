#include <iostream>
#include <map>
#include <string>
#include <unordered_map>
#include <thread>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <mutex>
using namespace std;

/*

23 Deisgn Patterns
- Creational > Class Based (Factory Method) and Object Based etc
- Structural > Class Based (Class Adpter) and Object Based etc
- Behavorial > Class Based (Intepreter Method & Template Method) and Object Based etc

- Other Common Pattenrs > Model View Controller (MVC) - Model, View, User, COntroller
- State > Context - State - Concrete State A,B C etc
- Singleton > Creation of one instance and global use
- Observer > Observer - Notify Object - register - observer
- Idioms - Language level code behavior

C++ Idioms - Resource Acquisition Is Initialization
class Foo {
    Foo () { Do SOmething }
    Foo () { Undo sonmething }
    };

C++ Idioms - Poimter To Implementation
class Foo {
    FooImpl *fp'
};
class FooImpl {
};
    
C++ Idioms - Smart Pointers
class Ptr<T> {
    T* p;
}
public: T* operator -> () const {
    return p;
}

C++ Idioms - Curiosly Recurring Temoplate
class B<T> ();
class D: 
    public B<D> { );

*/

int main() {

        // Resiurce Acquisition Is Initialization (RAII)

        mutex mt;

        mt.lock();


        mt.unlock();


    return 0;
};