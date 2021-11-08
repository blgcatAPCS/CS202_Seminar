#include "decorator.h"

using namespace std;

int main(){
    Component *simple = new ConcreteComponent;
    cout << "Simple component:\n";
    cout << "Result: " << simple->doSomething();
    cout << "\n\n";

    Component *decorator1 = new ConcreteDecorator(simple);
    cout << "Decorator component 1:\n";
    cout << "Result: " << decorator1->doSomething();
    cout << "\n\n";

    Component *decorator2 = new ConcreteDecorator(decorator1);
    cout << "Decorator component 2:\n";
    cout << "Result: " << decorator2->doSomething();
    cout << "\n\n";

    delete simple;
    delete decorator1;
    delete decorator2;

    return 0;
}